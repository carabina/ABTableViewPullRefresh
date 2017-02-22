//
//  EGORefreshTableHeaderView.h
//  Demo
//
//  Created by Devin Doty on 10/14/09October14.
//  Copyright 2009 enormego. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//


// 2017/01/18 Update - Anthony Beard
/*
 I was having lots of problems with the standard EGORefreshTableHeaderView.
 
 Luckily, I found an upgraded version provided by cocoanetics. That version can be found here:https://www.cocoanetics.com/2009/12/how-to-make-a-pull-to-reload-tableview-just-like-tweetie-2/
 
 The following is mostly their vanilla code. Though I did change a couple things, like changing the text to match what was in the previous version. Though, the Japanese text probably wasn't in Devin's original. :/
 
 I also overrode the setFrame function to center the text elements inside the frame. The activity view and arrow, I left as was.
 */


#import <UIKit/UIKit.h>


#define kReleaseToReloadStatus	0
#define kPullToReloadStatus		1
#define kLoadingStatus			2

@interface EGORefreshTableHeaderView : UIView {
    
    UILabel *lastUpdatedLabel;
    UILabel *statusLabel;
    UIImageView *arrowImage;
    UIActivityIndicatorView *activityView;
    
    BOOL isFlipped;
    
    NSDate *lastUpdatedDate;
}
@property BOOL isFlipped;

@property (nonatomic, strong) NSDate *lastUpdatedDate;

- (void)flipImageAnimated:(BOOL)animated;
- (void)toggleActivityView:(BOOL)isON;
- (void)setStatus:(int)status;

@end