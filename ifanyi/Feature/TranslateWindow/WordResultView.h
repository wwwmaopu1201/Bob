//
//  WordResultView.h
//  ifanyi
//
//  Created by ripper on 2019/11/17.
//  Copyright © 2019 ripperhe. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "TranslateResult.h"

NS_ASSUME_NONNULL_BEGIN

@interface WordResultView : NSView

@property (nonatomic, strong) TranslateWordResult *wordResult;
@property (nonatomic, copy) void(^playAudioBlock)(WordResultView *view, NSString *url);
@property (nonatomic, copy) void(^selectWordBlock)(WordResultView *view, NSString *word);

- (void)refreshWithWordResult:(TranslateWordResult *)wordResult;

@end

NS_ASSUME_NONNULL_END
