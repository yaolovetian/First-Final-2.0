//
//  ReadController.h
//  First·简
//
//  Created by yearwen on 15-6-11.
//  Copyright (c) 2015年 张耀文. All rights reserved.
//

#import "MainBaseController.h"
#import "AFNetworking.h"
@interface ReadController : MainBaseController
{
    AFHTTPRequestOperationManager * _manage;

}
@property(nonatomic,strong)NSMutableArray * ScrDataArr;
@end