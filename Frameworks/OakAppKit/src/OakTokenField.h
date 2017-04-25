#import <oak/misc.h>

NS_ASSUME_NONNULL_BEGIN

@class OakTokenField;

@protocol OakTokenFieldDelegate <NSTextFieldDelegate>

@optional
- (nullable NSArray*)tokenField:(OakTokenField*)tokenField completionsForSubstring:(NSString*)substring indexOfToken:(NSInteger)tokenIndex indexOfSelectedItem:(nullable NSInteger*)selectedIndex;
- (NSArray*)tokenField:(OakTokenField*)tokenField shouldAddObjects:(NSArray*)tokens atIndex:(NSUInteger)index;
@end

@interface OakTokenField : NSTextField

@end

NS_ASSUME_NONNULL_END
