#if __has_builtin(__builtin_available)
#define OAK_AVAILABLE(major, minor) @available(macos major##.##minor, *)
#else
#define OAK_AVAILABLE(major, minor) [NSProcessInfo instancesRespondToSelector:@selector(isOperatingSystemAtLeastVersion:)] && [[NSProcessInfo processInfo] isOperatingSystemAtLeastVersion:{ major, minor, 0 }]
#endif

#if !defined(MAC_OS_X_VERSION_10_12) || (MAC_OS_X_VERSION_MAX_ALLOWED < MAC_OS_X_VERSION_10_12)
@interface NSWindow (Sierra)
+ (void)setAllowsAutomaticWindowTabbing:(BOOL)flag;
@end

@protocol CAAnimationDelegate <NSObject>
@end

#define NSAlertStyleWarning       NSAlertStyleWarning
#define NSAlertStyleInformational NSAlertStyleInformational
#define NSAlertStyleCritical      NSAlertStyleCritical
#endif

#if !defined(MAC_OS_X_VERSION_10_14) || (MAC_OS_X_VERSION_MAX_ALLOWED < MAC_OS_X_VERSION_10_14)
#define NSVisualEffectMaterialHeaderView (NSVisualEffectMaterial)10
#endif

#if !defined(MAC_OS_X_VERSION_10_13) || (MAC_OS_X_VERSION_MAX_ALLOWED < MAC_OS_X_VERSION_10_13)
typedef NSString *NSAppearanceName;
#endif

#if !defined(MAC_OS_X_VERSION_10_14) || (MAC_OS_X_VERSION_MAX_ALLOWED < MAC_OS_X_VERSION_10_14)
extern NSAppearanceName const NSAppearanceNameDarkAqua __attribute__((weak_import));

@interface NSAppearance (Mojave)
- (NSAppearanceName)bestMatchFromAppearancesWithNames:(NSArray<NSAppearanceName> *)appearances;
@end

@interface NSApplication (Mojave)
@property(readonly, strong) NSAppearance *effectiveAppearance;
@end
#endif
