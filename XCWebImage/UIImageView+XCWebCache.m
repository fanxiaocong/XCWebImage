//
//  UIImageView+XCWebCache.m
//  XCWebImageExample
//
//  Created by 樊小聪 on 2017/10/14.
//  Copyright © 2017年 樊小聪. All rights reserved.
//


/*
 *  备注：UIImageView 网络图片加载 🐾
 */


#import "UIImageView+XCWebCache.h"
#import <SDWebImage/UIImageView+WebCache.h>


@implementation UIImageView (XCWebCache)

#pragma mark - 🔓 👀 Public Method 👀

- (void)xc_setImageWithURL:(nullable NSURL *)url NS_REFINED_FOR_SWIFT
{
    [self xc_setImageWithURL:url placeholderImage:nil options:0 progress:nil completed:nil];
}

- (void)xc_setImageWithURL:(nullable NSURL *)url
          placeholderImage:(nullable UIImage *)placeholder NS_REFINED_FOR_SWIFT
{
    [self xc_setImageWithURL:url placeholderImage:placeholder options:0 progress:nil completed:nil];
}

- (void)xc_setImageWithURL:(nullable NSURL *)url
          placeholderImage:(nullable UIImage *)placeholder
                   options:(XCWebImageOptions)options NS_REFINED_FOR_SWIFT
{
    [self xc_setImageWithURL:url placeholderImage:placeholder options:options progress:nil completed:nil];
}

- (void)xc_setImageWithURL:(nullable NSURL *)url
                 completed:(nullable XCExternalCompletionBlock)completedBlock
{
    [self xc_setImageWithURL:url placeholderImage:nil options:0 progress:nil completed:completedBlock];
}


- (void)xc_setImageWithURL:(nullable NSURL *)url
          placeholderImage:(nullable UIImage *)placeholder
                 completed:(nullable XCExternalCompletionBlock)completedBlock NS_REFINED_FOR_SWIFT
{
    [self xc_setImageWithURL:url placeholderImage:placeholder options:0 progress:nil completed:completedBlock];
}


- (void)xc_setImageWithURL:(nullable NSURL *)url
          placeholderImage:(nullable UIImage *)placeholder
                   options:(XCWebImageOptions)options
                 completed:(nullable XCExternalCompletionBlock)completedBlock
{
    [self xc_setImageWithURL:url placeholderImage:placeholder options:options progress:nil completed:completedBlock];
}


- (void)xc_setImageWithURL:(nullable NSURL *)url
          placeholderImage:(nullable UIImage *)placeholder
                   options:(XCWebImageOptions)options
                  progress:(nullable XCWebImageDownloaderProgressBlock)progressBlock
                 completed:(nullable XCExternalCompletionBlock)completedBlock
{
    [self sd_setImageWithURL:url placeholderImage:placeholder options:(NSUInteger)options progress:^(NSInteger receivedSize, NSInteger expectedSize, NSURL * _Nullable targetURL) {
        
        if (progressBlock)
        {
            progressBlock(receivedSize, expectedSize, targetURL);
        }
        
    } completed:^(UIImage * _Nullable image, NSError * _Nullable error, SDImageCacheType cacheType, NSURL * _Nullable imageURL) {
        
        if (completedBlock)
        {
            completedBlock(image, error, (NSUInteger)cacheType, imageURL);
        }
    }];
}


- (void)xc_setImageWithPreviousCachedImageWithURL:(nullable NSURL *)url
                                 placeholderImage:(nullable UIImage *)placeholder
                                          options:(XCWebImageOptions)options
                                         progress:(nullable XCWebImageDownloaderProgressBlock)progressBlock
                                        completed:(nullable XCExternalCompletionBlock)completedBlock
{
    [self sd_setImageWithPreviousCachedImageWithURL:url placeholderImage:placeholder options:(NSUInteger)options progress:^(NSInteger receivedSize, NSInteger expectedSize, NSURL * _Nullable targetURL) {
        
        if (progressBlock)
        {
            progressBlock(receivedSize, expectedSize, targetURL);
        }
        
    } completed:^(UIImage * _Nullable image, NSError * _Nullable error, SDImageCacheType cacheType, NSURL * _Nullable imageURL) {
        
        if (completedBlock)
        {
            completedBlock(image, error, (NSUInteger)cacheType, imageURL);
        }
    }];
}

- (void)xc_setAnimationImagesWithURLs:(nonnull NSArray<NSURL *> *)arrayOfURLs
{
    [self sd_setAnimationImagesWithURLs:arrayOfURLs];
}

- (void)xc_cancelCurrentAnimationImagesLoad
{
    [self sd_cancelCurrentAnimationImagesLoad];
}

@end
