//
//  ViewController.h
//  BaiduMap
//
//  Created by Sunny on 18/10/17.
//  Copyright © 2017年 Sunny. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BaiduMapAPI_Utils/BMKUtilsComponent.h>
#import <BaiduMapAPI_Map/BMKMapComponent.h>
#import <BaiduMapAPI_Search/BMKSearchComponent.h>

@interface ViewController : UIViewController<BMKGeoCodeSearchDelegate>{
    BMKGeoCodeSearch* _geocodesearch;
}


@end

