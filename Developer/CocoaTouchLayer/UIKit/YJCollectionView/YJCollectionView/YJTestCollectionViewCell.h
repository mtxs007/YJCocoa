//
//  YJTestCollectionViewCell.h
//  YJCollectionView
//
//  Created by admin on 16/5/21.
//  Copyright © 2016年 YJ. All rights reserved.
//

#import "YJCollectionViewCell.h"

NS_ASSUME_NONNULL_BEGIN

@interface YJTestCollectionCellModel : NSObject <YJCollectionCellModel>

@property (nonatomic, copy) NSString *index; ///< 位置

@end


@interface YJTestCollectionViewCell : YJCollectionViewCell

@property (weak, nonatomic) IBOutlet UILabel *label;

@end

NS_ASSUME_NONNULL_END