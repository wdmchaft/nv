/* PrefsWindowController */

#import <Cocoa/Cocoa.h>

@class NotationPrefsViewController;
@class GlobalPrefs;

@interface PrefsWindowController : NSObject {
    IBOutlet NSPopUpButton *folderLocationsMenuButton;
    IBOutlet NSTextField *bodyTextFontField;
    IBOutlet NSMatrix *tabKeyRadioMatrix;
    IBOutlet NSPopUpButton *tableTextMenuButton;
    IBOutlet NSTextField *tableTextSizeField;
    IBOutlet NSTextField *appShortcutField;
	IBOutlet NSButton *completeNoteTitlesButton;
	IBOutlet NSButton *checkSpellingButton;
	IBOutlet NSButton *confirmDeletionButton;
	IBOutlet NSButton *quitWhenClosingButton;
	IBOutlet NSButton *styledTextButton;
	IBOutlet NSButton *autoSuggestLinksButton;
	IBOutlet NSButton *softTabsButton;
	IBOutlet NSButton *makeURLsClickable;
	IBOutlet NSColorWell *searchHighlightColorWell;
    
    IBOutlet NotationPrefsViewController *notationPrefsViewController;
	
	NSMutableParagraphStyle *centerStyle;
	NSMutableDictionary *items;
	NSToolbar *toolbar;
	BOOL fontPanelWasOpen;
	
	IBOutlet NSWindow *window;
	IBOutlet NSView *editingView, *generalView, *databaseView, *notationPrefsView;
	
	GlobalPrefs *prefsController;
}
- (void)showWindow:(id)sender;

- (IBAction)changedSearchHighlightColorWell:(id)sender;
- (IBAction)changedMakeURLsClickable:(id)sender;
- (IBAction)changedStyledTextBehavior:(id)sender;
- (IBAction)changedAutoSuggestLinks:(id)sender;
- (IBAction)setAppShortcut:(id)sender;
- (IBAction)changeBodyFont:(id)sender;
- (void)previewNoteBodyFont;
- (IBAction)changedNoteDeletion:(id)sender;
- (IBAction)changedNotesFolderLocation:(id)sender;
- (IBAction)changedQuitBehavior:(id)sender;
- (IBAction)changedSpellChecking:(id)sender;
- (IBAction)changedTabBehavior:(id)sender;
- (IBAction)changedTableText:(id)sender;
- (IBAction)changedTitleCompletion:(id)sender;
- (IBAction)changedSoftTabs:(id)sender;

- (NSMenu*)directorySelectionMenu;
- (void)changeDefaultDirectory;
- (BOOL)getNewNotesRefFromOpenPanel:(FSRef*)notesDirectoryRef returnedPath:(NSString**)path;

- (NotationPrefsViewController*)notationPrefsViewController;
- (NSView*)databaseView;
- (void)addToolbarItemWithName:(NSString*)name;
- (void)switchViews:(NSToolbarItem *)item;
	NSRect ScaleRectWithFactor(NSRect rect, float factor);
@end
