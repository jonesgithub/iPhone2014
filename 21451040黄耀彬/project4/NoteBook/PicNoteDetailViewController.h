//
//  PicNoteViewController.h
//  NoteBook
//
//  Created by hyb on 14/12/20.
//  Copyright (c) 2014年 hyb. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NoteEntity.h"

@interface PicNoteDetailViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIImageView *noteImageView;
@property (strong, nonatomic) NoteEntity *noteEntity;

@end
