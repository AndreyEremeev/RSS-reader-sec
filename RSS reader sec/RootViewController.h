//
//  RootViewController.h
//  RSS reader sec
//
//  Created by admin on 10/27/12.
//  Copyright (c) 2012 AndrewEremeev. All rights reserved.
//  таблица,алерт,2 кнопки

#import <UIKit/UIKit.h>
#import "CTable.h"

@interface RootViewController : UIViewController <UITableViewDelegate, UITableViewDataSource,MyProtocolTable, MyProtocolAlert>{
    CTable *tableView;
    CAlert *alertView;
}

@property(nonatomic, retain) CTable *tableView;
@property(nonatomic, retain) CAlert *alertView;

@end
