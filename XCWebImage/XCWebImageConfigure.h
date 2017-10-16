//
//  XCWebImageConfigure.h
//  XCWebImageExample
//
//  Created by 樊小聪 on 2017/10/14.
//  Copyright © 2017年 樊小聪. All rights reserved.
//


#ifndef XCWebImageConfigure_h
#define XCWebImageConfigure_h


typedef NS_OPTIONS(NSUInteger, XCWebImageOptions) {
    /**
     * By default, when a URL fail to be downloaded, the URL is blacklisted so the library won't keep trying.
     * This flag disable this blacklisting.
     */
    XCWebImageRetryFailed = 1 << 0,
    
    /**
     * By default, image downloads are started during UI interactions, this flags disable this feature,
     * leading to delayed download on UIScrollView deceleration for instance.
     */
    XCWebImageLowPriority = 1 << 1,
    
    /**
     * This flag disables on-disk caching
     */
    XCWebImageCacheMemoryOnly = 1 << 2,
    
    /**
     * This flag enables progressive download, the image is displayed progressively during download as a browser would do.
     * By default, the image is only displayed once completely downloaded.
     */
    XCWebImageProgressiveDownload = 1 << 3,
    
    /**
     * Even if the image is cached, respect the HTTP response cache control, and refresh the image from remote location if needed.
     * The disk caching will be handled by NSURLCache instead of XCWebImage leading to slight performance degradation.
     * This option helps deal with images changing behind the same request URL, e.g. Facebook graph api profile pics.
     * If a cached image is refreshed, the completion block is called once with the cached image and again with the final image.
     *
     * Use this flag only if you can't make your URLs static with embedded cache busting parameter.
     */
    XCWebImageRefreshCached = 1 << 4,
    
    /**
     * In iOS 4+, continue the download of the image if the app goes to background. This is achieved by asking the system for
     * extra time in background to let the request finish. If the background task expires the operation will be cancelled.
     */
    XCWebImageContinueInBackground = 1 << 5,
    
    /**
     * Handles cookies stored in NSHTTPCookieStore by setting
     * NSMutableURLRequest.HTTPShouldHandleCookies = YES;
     */
    XCWebImageHandleCookies = 1 << 6,
    
    /**
     * Enable to allow untrusted SSL certificates.
     * Useful for testing purposes. Use with caution in production.
     */
    XCWebImageAllowInvalidSSLCertificates = 1 << 7,
    
    /**
     * By default, images are loaded in the order in which they were queued. This flag moves them to
     * the front of the queue.
     */
    XCWebImageHighPriority = 1 << 8,
    
    /**
     * By default, placeholder images are loaded while the image is loading. This flag will delay the loading
     * of the placeholder image until after the image has finished loading.
     */
    XCWebImageDelayPlaceholder = 1 << 9,
    
    /**
     * We usually don't call transformDownloadedImage delegate method on animated images,
     * as most transformation code would mangle it.
     * Use this flag to transform them anyway.
     */
    XCWebImageTransformAnimatedImage = 1 << 10,
    
    /**
     * By default, image is added to the imageView after download. But in some cases, we want to
     * have the hand before setting the image (apply a filter or add it with cross-fade animation for instance)
     * Use this flag if you want to manually set the image in the completion when success
     */
    XCWebImageAvoidAutoSetImage = 1 << 11,
    
    /**
     * By default, images are decoded respecting their original size. On iOS, this flag will scale down the
     * images to a size compatible with the constrained memory of devices.
     * If `XCWebImageProgressiveDownload` flag is set the scale down is deactivated.
     */
    XCWebImageScaleDownLargeImages = 1 << 12
};


typedef NS_ENUM(NSInteger, XCImageCacheType) {
    /**
     * The image wasn't available the SDWebImage caches, but was downloaded from the web.
     */
    XCImageCacheTypeNone,
    /**
     * The image was obtained from the disk cache.
     */
    XCImageCacheTypeDisk,
    /**
     * The image was obtained from the memory cache.
     */
    XCImageCacheTypeMemory
};

typedef void(^SDCacheQueryCompletedBlock)(UIImage * _Nullable image, NSData * _Nullable data, XCImageCacheType cacheType);

typedef void(^SDWebImageCheckCacheCompletionBlock)(BOOL isInCache);

typedef void(^SDWebImageCalculateSizeBlock)(NSUInteger fileCount, NSUInteger totalSize);


typedef void(^XCExternalCompletionBlock)(UIImage * _Nullable image, NSError * _Nullable error, XCImageCacheType cacheType, NSURL * _Nullable imageURL);

typedef void(^XCInternalCompletionBlock)(UIImage * _Nullable image, NSData * _Nullable data, NSError * _Nullable error, XCImageCacheType cacheType, BOOL finished, NSURL * _Nullable imageURL);

typedef NSString * _Nullable (^XCWebImageCacheKeyFilterBlock)(NSURL * _Nullable url);


typedef void(^XCWebImageDownloaderProgressBlock)(NSInteger receivedSize, NSInteger expectedSize, NSURL * _Nullable targetURL);

typedef void(^XCWebImageDownloaderCompletedBlock)(UIImage * _Nullable image, NSData * _Nullable data, NSError * _Nullable error, BOOL finished);


#endif /* XCWebImageConfigure_h */
