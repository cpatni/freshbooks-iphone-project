/*
 Copyright (c) 2008, 2ndSite Inc.
 All rights reserved.
 
 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:
 
 * Redistributions of source code must retain the above copyright notice,
 this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright
 notice, this list of conditions and the following disclaimer in the
 documentation and/or other materials provided with the distribution.
 * Neither the name of the <ORGANIZATION> nor the names of its
 contributors may be used to endorse or promote products derived from this
 software without specific prior written permission.
 
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#import <UIKit/UIKit.h>
@class ProjectSelector;
@class MainViewController;

@interface TaskSelector : UIViewController <UIPickerViewDataSource,UIPickerViewDelegate> {
	MainViewController *mainViewController;
	UIView *modalBackdrop;
	UILabel *taskTextLabel;
	IBOutlet UIPickerView *taskPicker;
	NSMutableDictionary *selectedProject;
	NSMutableDictionary *selectedTask;
}
@property (nonatomic, retain) MainViewController *mainViewController;
@property (nonatomic, retain) UILabel *taskTextLabel;
@property (nonatomic, retain) UIView *modalBackdrop;
@property (nonatomic, retain) NSMutableDictionary *selectedProject;
@property (nonatomic, retain) NSMutableDictionary *selectedTask;

- (IBAction) doneButtonClicked:(id)sender;
- (void) show;
- (void) hide;

- (void)projectDataChanged:(NSNotification *) notification;
- (void)selectedProjectChanged:(NSNotification *) notification;
- (void)setSelectedTaskByIndex:(NSInteger)row;
- (void)setSelectedTaskById:(NSString *)tid;
- (void)clearSelectedTask;
- (void) verifySelectedTask;

@end
