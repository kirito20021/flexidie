/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

//#import "NLViewController.h"
//#import "LINE-Structs.h"
//#import "UIAlertViewDelegate.h"
//#import "UITextFieldDelegate.h"

@class UIView, RegistrationInputField, UIImageView, UITextField, UIButton;

__attribute__((visibility("hidden")))
@interface RegistrationAccountConnectViewController : NSObject { // NLViewController <UIAlertViewDelegate, UITextFieldDelegate> {
	RegistrationInputField* _accountField;
	RegistrationInputField* _passwordField;
	UIButton* _loginButton;
	UIButton* _skipButton;
	UIImageView* _icon;
	UIButton* _whenForgotPasswordButton;
	UIView* _whenForgotPasswordUnderline;
	UIButton* _switchingToNaverIDButton;
	UIView* _switchingToNaverIDUnderlineView;
	UIButton* _switchingToEmailButton;
	UIView* _switchingToEmailUnderlineView;
	UIView* _separatorLineView;
	UIButton* _facebookButton;
	UIView* _chineseSNSButtonsView;
	int _accountType;
	UITextField* _editingTextField;
}
@property(retain, nonatomic) UITextField* editingTextField;
@property(assign, nonatomic) int accountType;
@property(assign, nonatomic) UIView* chineseSNSButtonsView;
@property(assign, nonatomic) UIButton* facebookButton;
@property(assign, nonatomic) UIView* separatorLineView;
@property(assign, nonatomic) UIView* switchingToEmailUnderlineView;
@property(assign, nonatomic) UIButton* switchingToEmailButton;
@property(assign, nonatomic) UIView* switchingToNaverIDUnderlineView;
@property(assign, nonatomic) UIButton* switchingToNaverIDButton;
@property(assign, nonatomic) UIView* whenForgotPasswordUnderline;
@property(assign, nonatomic) UIButton* whenForgotPasswordButton;
@property(assign, nonatomic) UIImageView* icon;
@property(assign, nonatomic) UIButton* skipButton;
@property(assign, nonatomic) UIButton* loginButton;
@property(assign, nonatomic) RegistrationInputField* passwordField;
@property(assign, nonatomic) RegistrationInputField* accountField;
//-(void).cxx_destruct;
-(void)feixinButtonTapped:(id)tapped;
-(void)renrenButtonTapped:(id)tapped;
-(void)weiboButtonTapped:(id)tapped;
-(void)facebookButtonTapped:(id)tapped;
-(void)connectToSNS:(int)sns;
-(void)switchingToEmailButtonTapped:(id)emailButtonTapped;
-(void)switchingToNaverIDButtonTapped:(id)naverIDButtonTapped;
-(void)passwordTextChanged:(id)changed;
-(void)whenForgotPasswordButtonPressed:(id)pressed;
-(void)skipButtonPressed:(id)pressed;
-(void)okButtonPressed:(id)pressed;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)textFieldDidEndEditing:(id)textField;
-(BOOL)textFieldShouldEndEditing:(id)textField;
-(void)textFieldDidBeginEditing:(id)textField;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidUnload;
-(void)viewDidLoad;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(void)reloadView;
-(void)scrollDown;
-(void)scrollUpToField:(id)field;
-(void)updateLayouts;
-(void)setupLocalizedStrings;
-(void)configureChineseSNSButtonsView:(id)view;
-(void)configureFacebookButton:(id)button;
-(void)configureSeparatorLineView:(id)view;
-(void)configureSwitchingToEmailUnderlineView:(id)emailUnderlineView;
-(void)configureSwitchingToEmailButton:(id)emailButton;
-(void)configureSwitchingToNaverIDUnderlineView:(id)naverIDUnderlineView;
-(void)configureSwitchingToNaverIDButton:(id)naverIDButton;
-(void)configureWhenForgotPasswordUnderlineView:(id)view;
-(void)configureWhenForgotPasswordButton:(id)button;
-(void)configureSkipButton:(id)button;
-(void)configureLoginButton:(id)button;
-(void)configurePasswordField:(id)field;
-(void)configureAccountField:(id)field;
-(void)configureSubviews;
-(void)configureNavigationItem;
@end
