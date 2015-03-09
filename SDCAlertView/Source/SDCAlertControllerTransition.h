//
//  SDCAlertControllerTransition.h
//  SDCAlertView
//
//  Created by Scott Berrevoets on 9/21/14.
//  Copyright (c) 2014 Scotty Doesn't Code. All rights reserved.
//

@interface SDCAlertAnimationController : NSObject <UIViewControllerAnimatedTransitioning>
@property (nonatomic, getter=isPresentation) BOOL presentation;
@end

@interface SDCAlertControllerTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate>

@end
