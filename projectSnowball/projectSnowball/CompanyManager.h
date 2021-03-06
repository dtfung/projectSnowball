//
//  DAO.h
//  projectSnowball
//
//  Created by Donald Fung on 9/19/15.
//  Copyright © 2015 Donald Fung & Blayne Cameron. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AppDelegate.h"
#import "CompanyData.h"

@interface CompanyManager : NSObject

+(id)companyManager;

@property (nonatomic, retain) AppDelegate *appDelegate;
@property (nonatomic, retain) NSMutableArray *companyList;

- (void)storedCompanyData;
- (void)loadDataToView;
- (void)saveChanges;
@end
