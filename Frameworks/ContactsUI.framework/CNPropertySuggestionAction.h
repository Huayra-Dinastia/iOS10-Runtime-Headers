/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPropertySuggestionAction : CNPropertyAction {
    long long  _selectedChoice;
    CNContactSuggestionViewController * _suggestionViewController;
}

@property (nonatomic) long long selectedChoice;
@property (nonatomic, retain) CNContactSuggestionViewController *suggestionViewController;

- (void).cxx_destruct;
- (bool)_confirmOrReject:(bool)arg1;
- (void)confirm;
- (void)performActionForItem:(id)arg1 sender:(id)arg2;
- (void)reject;
- (long long)selectedChoice;
- (void)setSelectedChoice:(long long)arg1;
- (void)setSuggestionViewController:(id)arg1;
- (id)suggestionViewController;

@end