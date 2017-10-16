//
//  UIButton+XCWebCache.h
//  XCWebImageExample
//
//  Created by 樊小聪 on 2017/10/14.
//  Copyright © 2017年 樊小聪. All rights reserved.
//


/*
 *  备注：UIButton 网络图片加载 🐾
 */

#import <UIKit/UIKit.h>

#import "XCWebImageConfigure.h"


@interface UIButton (XCWebCache)

#pragma mark - Image

/**
 *  返回当前图片的 URL 地址
 */
- (nullable NSURL *)xc_currentImageURL;
/**
 *  返回当前图片的 URL 地址，根据不同的状态
 */
- (nullable NSURL *)xc_imageURLForState:(UIControlState)state;



/**
 *  加载图片
 *
 *  @param url               图片URL地址
 *  @param state             按钮状态
 */
- (void)xc_setImageWithURL:(nullable NSURL *)url
                  forState:(UIControlState)state NS_REFINED_FOR_SWIFT;


/**
 *  加载图片
 *
 *  @param url               图片URL地址
 *  @param state             按钮状态
 *  @param placeholder       占位图片
 */
- (void)xc_setImageWithURL:(nullable NSURL *)url
                  forState:(UIControlState)state
          placeholderImage:(nullable UIImage *)placeholder NS_REFINED_FOR_SWIFT;


/**
 *  加载图片
 *
 *  @param url               图片URL地址
 *  @param state             按钮状态
 *  @param placeholder       占位图片
 *  @param options           加载选项
 */
- (void)xc_setImageWithURL:(nullable NSURL *)url
                  forState:(UIControlState)state
          placeholderImage:(nullable UIImage *)placeholder
                   options:(XCWebImageOptions)options NS_REFINED_FOR_SWIFT;


/**
 *  加载图片
 *
 *  @param url               图片URL地址
 *  @param state             按钮状态
 *  @param completedBlock    加载完成的回调
 */
- (void)xc_setImageWithURL:(nullable NSURL *)url
                  forState:(UIControlState)state
                 completed:(nullable XCExternalCompletionBlock)completedBlock;


/**
 *  加载图片
 *
 *  @param url               图片URL地址
 *  @param state             按钮状态
 *  @param placeholder       占位图片
 *  @param completedBlock    加载完成的回调
 */
- (void)xc_setImageWithURL:(nullable NSURL *)url
                  forState:(UIControlState)state
          placeholderImage:(nullable UIImage *)placeholder
                 completed:(nullable XCExternalCompletionBlock)completedBlock NS_REFINED_FOR_SWIFT;


/**
 *  加载图片
 *
 *  @param url               图片URL地址
 *  @param state             按钮状态
 *  @param placeholder       占位图片
 *  @param options           加载选项
 *  @param completedBlock    加载完成的回调
 */
- (void)xc_setImageWithURL:(nullable NSURL *)url
                  forState:(UIControlState)state
          placeholderImage:(nullable UIImage *)placeholder
                   options:(XCWebImageOptions)options
                 completed:(nullable XCExternalCompletionBlock)completedBlock;

#pragma mark - Background image

/**
 *  返回当前背景图片的 URL 地址
 */
- (nullable NSURL *)xc_currentBackgroundImageURL;

/**
 *  返回当前背景图片的 URL 地址，根据不同的状态
 */
- (nullable NSURL *)xc_backgroundImageURLForState:(UIControlState)state;



/**
 *  加载图片
 *
 *  @param url               图片URL地址
 *  @param state             按钮状态
 */
- (void)xc_setBackgroundImageWithURL:(nullable NSURL *)url
                            forState:(UIControlState)state NS_REFINED_FOR_SWIFT;



/**
 *  加载图片
 *
 *  @param url               图片URL地址
 *  @param state             按钮状态
 *  @param placeholder       占位图片
 */
- (void)xc_setBackgroundImageWithURL:(nullable NSURL *)url
                            forState:(UIControlState)state
                    placeholderImage:(nullable UIImage *)placeholder NS_REFINED_FOR_SWIFT;


/**
 *  加载图片
 *
 *  @param url               图片URL地址
 *  @param state             按钮状态
 *  @param placeholder       占位图片
 *  @param options           加载选项
 */
- (void)xc_setBackgroundImageWithURL:(nullable NSURL *)url
                            forState:(UIControlState)state
                    placeholderImage:(nullable UIImage *)placeholder
                             options:(XCWebImageOptions)options NS_REFINED_FOR_SWIFT;


/**
 *  加载图片
 *
 *  @param url               图片URL地址
 *  @param state             按钮状态
 *  @param completedBlock    加载完成的回调
 */
- (void)xc_setBackgroundImageWithURL:(nullable NSURL *)url
                            forState:(UIControlState)state
                           completed:(nullable XCExternalCompletionBlock)completedBlock;


/**
 *  加载图片
 *
 *  @param url               图片URL地址
 *  @param state             按钮状态
 *  @param placeholder       占位图片
 *  @param completedBlock    加载完成的回调
 */
- (void)xc_setBackgroundImageWithURL:(nullable NSURL *)url
                            forState:(UIControlState)state
                    placeholderImage:(nullable UIImage *)placeholder
                           completed:(nullable XCExternalCompletionBlock)completedBlock NS_REFINED_FOR_SWIFT;


/**
 *  加载图片
 *
 *  @param url               图片URL地址
 *  @param state             按钮状态
 *  @param placeholder       占位图片
 *  @param options           加载选项
 *  @param completedBlock    加载完成的回调
 */
- (void)xc_setBackgroundImageWithURL:(nullable NSURL *)url
                            forState:(UIControlState)state
                    placeholderImage:(nullable UIImage *)placeholder
                             options:(XCWebImageOptions)options
                           completed:(nullable XCExternalCompletionBlock)completedBlock;

#pragma mark - Cancel

/**
 * Cancel the current image download
 */
- (void)xc_cancelImageLoadForState:(UIControlState)state;

/**
 * Cancel the current backgroundImage download
 */
- (void)xc_cancelBackgroundImageLoadForState:(UIControlState)state;

@end
