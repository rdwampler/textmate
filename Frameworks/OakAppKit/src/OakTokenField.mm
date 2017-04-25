#import "OakTokenField.h"


@interface OakTokenFieldEditor : NSTextView
@end

@implementation OakTokenFieldEditor
- (instancetype)initWithFrame:(NSRect)aFrame
{
	if(self = [super initWithFrame:aFrame])
	{
		self.fieldEditor = YES;
	}
	return self;
}
@end
@interface OakTokenFieldCell : NSTextFieldCell
@end

@implementation OakTokenFieldCell
{
	OakTokenFieldEditor* _fieldEditor;
}

- (NSTextView*)fieldEditorForView:(NSView*)controlView
{
	if(!_fieldEditor)
	{

	}

	return _fieldEditor;
}
@end

@implementation OakTokenField
- (id)init
{
	if((self = [super init]))
	{
	}
	return self;
}
@end