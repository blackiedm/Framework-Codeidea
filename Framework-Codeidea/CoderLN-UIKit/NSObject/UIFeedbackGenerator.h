/*
 * UIFeedbackGenerator.h
 *
 * UIKit (c) 2016-2017
 *「Public_不知名开发者 | https://github.com/CoderLN | https://www.jianshu.com/u/fd745d76c816」
 *
 * 各位厂友, 由于「时间 & 知识」有限, 总结的文章难免有「未全、不足」, 该模块将系统化学习, 后续「坚持新增文章, 替换、补充文章内容」
 */
 
#import <Foundation/Foundation.h>
#import <UIKit/UIKitDefines.h>

NS_ASSUME_NONNULL_BEGIN

// UIFeedbackGenerator is an abstract class that should not be used directly
UIKIT_CLASS_AVAILABLE_IOS_ONLY(10_0) @interface UIFeedbackGenerator : NSObject

/// informs self that it will likely receive events soon, so that it can ensure minimal latency for any feedback generated
/// safe to call more than once before the generator receives an event, if events are still imminently possible
- (void)prepare;

@end
NS_ASSUME_NONNULL_END

