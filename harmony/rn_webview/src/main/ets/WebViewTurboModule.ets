import { TM } from '@rnoh/react-native-openharmony/generated/ts';
import { AnyThreadTurboModule } from '@rnoh/react-native-openharmony/ts';
import Logger from './Logger';

const TAG = "WebViewTurboModule"

export class WebViewTurboModule extends AnyThreadTurboModule implements TM.RNCWebViewModule.Spec {
  private shouldStartParamsMap : Map<number,ShouldStartParams> = new Map();

  isFileUploadSupported(): Promise<boolean> {
    return Promise.resolve(true)
  }

  shouldStartLoadWithLockIdentifier(shouldStart: boolean, lockIdentifier: number): void {
    console.log("ljc shouldStartLoadWithLockIdentifier:" + shouldStart + " lockIdentifier:" + lockIdentifier)
    let shouldStartParams = this.shouldStartParamsMap.get(lockIdentifier)
    console.log("ljc shouldStartLoadWithLockIdentifier setShouldStartParams:" + JSON.stringify(shouldStartParams))
    if (shouldStartParams) {
      shouldStartParams.shouldStart = shouldStart
      shouldStartParams.lockState = shouldStart ? ShouldOverrideCallbackState.ALLOW_LOADING : ShouldOverrideCallbackState.SHOULD_OVERRIDE;
    }
    this.shouldStartParamsMap.set(lockIdentifier,shouldStartParams || new ShouldStartParams())
  }


  setShouldStartParams(params: ShouldStartParams){
    console.log("ljc setShouldStartParams:" + JSON.stringify(params))
    this.shouldStartParamsMap.set(params.lockIdentifier,params)
  }
}

// 锁状态
export enum ShouldOverrideCallbackState {
  /**
   * 初始状态
   */
  UNDECIDED,
  /**
   * 阻止加载
   */
  SHOULD_OVERRIDE,
  /**
   * 允许加载
   */
  ALLOW_LOADING,
}

@Sendable
export class ShouldStartParams {
  shouldStart: boolean = true
  lockIdentifier: number = -1
  // 对应ShouldOverrideCallbackState
  lockState: number = 0
}
