//
//  UIButton+XCWebCache.m
//  XCWebImageExample
//
//  Created by 樊小聪 on 2017/10/14.
//  Copyright © 2017年 樊小聪. All rights reserved.
//

#import "UIButton+XCWebCache.h"

#import <SDWebImage/UIButton+WebCache.h>


@implementation UIButton (XCWebCache)

#pragma mark - Image

- (nullable NSURL *)xc_currentImageURL
{
    return [self sd_currentImageURL];
}

- (nullable NSURL *)xc_imageURLForState:(UIControlState)state
{
    return [self sd_imageURLForState:state];
}


- (void)xc_setImageWithURL:(nullable NSURL *)url
                  forState:(UIControlState)state NS_REFINED_FOR_SWIFT
{
    [self xc_setImageWithURL:url forState:state placeholderImage:nil options:0 completed:nil];
}

- (void)xc_setImageWithURL:(nullable NSURL *)url
                  forState:(UIControlState)state
          placeholderImage:(nullable UIImage *)placeholder NS_REFINED_FOR_SWIFT
{
    [self xc_setImageWithURL:url forState:state placeholderImage:placeholder options:0 completed:nil];
}


- (void)xc_setImageWithURL:(nullable NSURL *)url
                  forState:(UIControlState)state
          placeholderImage:(nullable UIImage *)placeholder
                   options:(XCWebImageOptions)options NS_REFINED_FOR_SWIFT
{
    [self xc_setImageWithURL:url forState:state placeholderImage:placeholder options:options completed:nil];
}


- (void)xc_setImageWithURL:(nullable NSURL *)url
                  forState:(UIControlState)state
                 completed:(nullable XCExternalCompletionBlock)completedBlock
{
    [self xc_setImageWithURL:url forState:state placeholderImage:nil options:0 completed:completedBlock];
}


- (void)xc_setImageWithURL:(nullable NSURL *)url
                  forState:(UIControlState)state
          placeholderImage:(nullable UIImage *)placeholder
                 completed:(nullable XCExternalCompletionBlock)completedBlock NS_REFINED_FOR_SWIFT
{
    [self xc_setImageWithURL:url forState:state placeholderImage:placeholder options:0 completed:completedBlock];
}


- (void)xc_setImageWithURL:(nullable NSURL *)url
                  forState:(UIControlState)state
          placeholderImage:(nullable UIImage *)placeholder
                   options:(XCWebImageOptions)options
                 completed:(nullable XCExternalCompletionBlock)completedBlock
{
    [self sd_setImageWithURL:url forState:state placeholderImage:placeholder options:(NSUInteger)options completed:^(UIImage * _Nullable image, NSError * _Nullable error, SDImageCacheType cacheType, NSURL * _Nullable imageURL) {
        
        if (completedBlock)
        {
            completedBlock(image, error, (NSUInteger)cacheType, imageURL);
        }
    }];
}

#pragma mark - Background image


- (nullable NSURL *)xc_currentBackgroundImageURL
{
    return [self sd_currentBackgroundImageURL];
}


- (nullable NSURL *)xc_backgroundImageURLForState:(UIControlState)state
{
    return [self sd_backgroundImageURLForState:state];
}


- (void)xc_setBackgroundImageWithURL:(nullable NSURL *)url
                            forState:(UIControlState)state NS_REFINED_FOR_SWIFT
{
    [self xc_setBackgroundImageWithURL:url forState:state placeholderImage:nil options:0 completed:nil];
}


- (void)xc_setBackgroundImageWithURL:(nullable NSURL *)url
                            forState:(UIControlState)state
                    placeholderImage:(nullable UIImage *)placeholder NS_REFINED_FOR_SWIFT
{
    [self xc_setBackgroundImageWithURL:url forState:state placeholderImage:placeholder options:0 completed:nil];
}


- (void)xc_setBackgroundImageWithURL:(nullable NSURL *)url
                            forState:(UIControlState)state
                    placeholderImage:(nullable UIImage *)placeholder
                             options:(XCWebImageOptions)options NS_REFINED_FOR_SWIFT
{
    [self xc_setBackgroundImageWithURL:url forState:state placeholderImage:placeholder options:options completed:nil];
}


- (void)xc_setBackgroundImageWithURL:(nullable NSURL *)url
                            forState:(UIControlState)state
                           completed:(nullable XCExternalCompletionBlock)completedBlock
{
    [self xc_setBackgroundImageWithURL:url forState:state placeholderImage:nil options:0 completed:completedBlock];
}


- (void)xc_setBackgroundImageWithURL:(nullable NSURL *)url
                            forState:(UIControlState)state
                    placeholderImage:(nullable UIImage *)placeholder
                           completed:(nullable XCExternalCompletionBlock)completedBlock NS_REFINED_FOR_SWIFT
{
    [self xc_setBackgroundImageWithURL:url forState:state placeholderImage:placeholder options:0 completed:completedBlock];
}


- (void)xc_setBackgroundImageWithURL:(nullable NSURL *)url
                            forState:(UIControlState)state
                    placeholderImage:(nullable UIImage *)placeholder
                             options:(XCWebImageOptions)options
                           completed:(nullable XCExternalCompletionBlock)completedBlock
{
    [self sd_setBackgroundImageWithURL:url forState:state placeholderImage:placeholder options:(NSUInteger)options completed:^(UIImage * _Nullable image, NSError * _Nullable error, SDImageCacheType cacheType, NSURL * _Nullable imageURL) {
        
        if (completedBlock)
        {
            completedBlock(image, error, (NSUInteger)cacheType, imageURL);
        }
    }];
}

#pragma mark - Cancel

/**
 * Cancel the current image download
 */
- (void)xc_cancelImageLoadForState:(UIControlState)state
{
    [self sd_cancelImageLoadForState:state];
}

/**
 * Cancel the current backgroundImage download
 */
- (void)xc_cancelBackgroundImageLoadForState:(UIControlState)state
{
    [self sd_cancelBackgroundImageLoadForState:state];
}

@end
