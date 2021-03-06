/*
 * UIFocusDebugger.h
 *
 * UIKit (c) 2017
 *「Public_不知名开发者 | https://github.com/CoderLN | https://www.jianshu.com/u/fd745d76c816」
 *
 * 各位厂友, 由于「时间 & 知识」有限, 总结的文章难免有「未全、不足」, 该模块将系统化学习, 后续「坚持新增文章, 替换、补充文章内容」
 */
 
#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>

@protocol UIFocusDebuggerOutput, UIFocusEnvironment, UIFocusItem;

NS_ASSUME_NONNULL_BEGIN

/// UIFocusDebugger provides a collection of runtime utilities for debugging issues related to focus interaction.
NS_CLASS_AVAILABLE_IOS(11_0) @interface UIFocusDebugger : NSObject

/// Outputs an overview of all supported debugging utilities and other relevant information.
///   - To use in Swift, enter `po UIFocusDebugger.help()` when paused in lldb.
///   - To use in Objective-C, enter `po [UIFocusDebugger help]` when paused in lldb.
+ (id<UIFocusDebuggerOutput>)help;

/// Outputs information for the currently focused item.
///   - To use in Swift, enter `po UIFocusDebugger.status()` when paused in lldb.
///   - To use in Objective-C, enter `po [UIFocusDebugger status]` when paused in lldb.
+ (id<UIFocusDebuggerOutput>)status;

/// Outputs a diagnosis of the specified item's focusability, including any known issues that may be preventing focusability.
///   - To use in Swift, enter `po UIFocusDebugger.checkFocusability(for: <item reference>)` when paused in lldb.
///   - To use in Objective-C, enter `po [UIFocusDebugger checkFocusabilityForItem:<item reference>]` when paused in lldb.
+ (id<UIFocusDebuggerOutput>)checkFocusabilityForItem:(id<UIFocusItem>)item;

/// Simulates a fake focus update requested by the specified environment (e.g. `[environment setNeedsFocusUpdate]`), outlining each step of the process for determining the next focused item.
///   - To use in Swift, enter `po UIFocusDebugger.simulateFocusUpdateRequest(from: <environment reference>)` when paused in lldb.
///   - To use in Objective-C, enter `po [UIFocusDebugger simulateFocusUpdateRequestFromEnvironment:<environment reference>]` when paused in lldb.
+ (id<UIFocusDebuggerOutput>)simulateFocusUpdateRequestFromEnvironment:(id<UIFocusEnvironment>)environment;

@end

NS_CLASS_AVAILABLE_IOS(11_0) @protocol UIFocusDebuggerOutput <NSObject>
@end
NS_ASSUME_NONNULL_END

