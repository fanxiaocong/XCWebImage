//
//  UIImageView+XCWebCache.h
//  XCWebImageExample
//
//  Created by 樊小聪 on 2017/10/14.
//  Copyright © 2017年 樊小聪. All rights reserved.
//


/*
 *  备注：UIImageView 网络图片加载 🐾
 */

#import <UIKit/UIKit.h>

#import "XCWebImageConfigure.h"


@interface UIImageView (XCWebCache)

/**
 *  根据 URL 加载图片
 *
 *  @param url 图片URL地址
 */
- (void)xc_setImageWithURL:(nullable NSURL *)url NS_REFINED_FOR_SWIFT;

/**
 *  加载图片
 *
 *  @param url               图片URL地址
 *  @param placeholder       占位图片
 */
- (void)xc_setImageWithURL:(nullable NSURL *)url
          placeholderImage:(nullable UIImage *)placeholder NS_REFINED_FOR_SWIFT;

/**
 *  加载图片
 *
 *  @param url               图片URL地址
 *  @param placeholder       占位图片
 *  @param options           加载选项
 */
- (void)xc_setImageWithURL:(nullable NSURL *)url
          placeholderImage:(nullable UIImage *)placeholder
                   options:(XCWebImageOptions)options NS_REFINED_FOR_SWIFT;

/**
 *  加载图片
 *
 *  @param url               图片URL地址
 *  @param completedBlock    加载完成的回调
 */
- (void)xc_setImageWithURL:(nullable NSURL *)url
                 completed:(nullable XCExternalCompletionBlock)completedBlock;

/**
 *  加载图片
 *
 *  @param url               图片URL地址
 *  @param placeholder       占位图片
 *  @param completedBlock    加载完成的回调
 */
- (void)xc_setImageWithURL:(nullable NSURL *)url
          placeholderImage:(nullable UIImage *)placeholder
                 completed:(nullable XCExternalCompletionBlock)completedBlock NS_REFINED_FOR_SWIFT;


/**
 *  加载图片
 *
 *  @param url               图片URL地址
 *  @param placeholder       占位图片
 *  @param options           加载选项
 *  @param completedBlock    加载完成的回调
 */
- (void)xc_setImageWithURL:(nullable NSURL *)url
          placeholderImage:(nullable UIImage *)placeholder
                   options:(XCWebImageOptions)options
                 completed:(nullable XCExternalCompletionBlock)completedBlock;


/**
 *  加载图片
 *
 *  @param url               图片URL地址
 *  @param placeholder       占位图片
 *  @param options           加载选项
 *  @param progressBlock     加载进度
 *  @param completedBlock    加载完成的回调
 */
- (void)xc_setImageWithURL:(nullable NSURL *)url
          placeholderImage:(nullable UIImage *)placeholder
                   options:(XCWebImageOptions)options
                  progress:(nullable XCWebImageDownloaderProgressBlock)progressBlock
                 completed:(nullable XCExternalCompletionBlock)completedBlock;


- (void)xc_setImageWithPreviousCachedImageWithURL:(nullable NSURL *)url
                                 placeholderImage:(nullable UIImage *)placeholder
                                          options:(XCWebImageOptions)options
                                         progress:(nullable XCWebImageDownloaderProgressBlock)progressBlock
                                        completed:(nullable XCExternalCompletionBlock)completedBlock;


/**
 *  根据 URL数组 加载一组图片
 *
 *  @param arrayOfURLs 图片URL地址数组
 */
- (void)xc_setAnimationImagesWithURLs:(nonnull NSArray<NSURL *> *)arrayOfURLs;

/**
 *  取消当前动画图片的加载
 */
- (void)xc_cancelCurrentAnimationImagesLoad;

@end
