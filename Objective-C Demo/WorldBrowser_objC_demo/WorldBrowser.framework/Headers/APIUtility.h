//
//  APIUtility.h
//  WorldRegistry
//
//  Created by TechnoMac-1 on 10/11/17.
//  Copyright © 2017 TechnoMac-1. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface APIUtility : NSObject

+ (APIUtility*) instance;
+ (id) initobj;
+(void)postRequestLogin :(id)dict appUrl:(NSString *)url complitionblock:(void (^)(id result)) return_block;
+(void)postRequest :(NSDictionary *)dict appUrl:(NSString *)url complitionblock:(void (^)(id result)) return_block;
+(void)newPostRequestWithFormData :(id)dict appUrl:(NSString *)url complitionblock:(void (^)(id result)) return_block;
+(void)getRequest :(id)dict appUrl:(NSString *)url complitionblock:(void (^)(id result)) return_block;
+(void)getRequest :(id)dict WithFullappUrl:(NSString *)url complitionblock:(void (^)(id result)) return_block;
+(void)DownloadRequest :(id)dict appUrl:(NSString *)url complitionblock:(void (^)(id result)) return_block;

@end
