/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSString, NSSet, <CoreDAVGetAccountPropertiesTaskGroupDelegate>, NSURL;

@interface CoreDAVGetAccountPropertiesTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVOptionsTaskDelegate, CoreDAVPrincipalSearchPropertySetTaskDelegate> {
    NSSet *_collections;
    NSString *_displayName;
    NSSet *_emailAddresses;
    BOOL _fetchPrincipalSearchProperties;
    BOOL _isExpandPropertyReportSupported;
    NSURL *_newServerURL;
    NSSet *_principalSearchProperties;
    NSURL *_principalURL;
    NSURL *_resourceID;
}

@property(readonly) NSSet * collections;
@property <CoreDAVGetAccountPropertiesTaskGroupDelegate> * delegate;
@property(readonly) NSString * displayName;
@property(readonly) NSSet * emailAddresses;
@property BOOL fetchPrincipalSearchProperties;
@property(readonly) BOOL isExpandPropertyReportSupported;
@property(retain) NSURL * newServerURL;
@property(readonly) NSSet * principalSearchProperties;
@property(readonly) NSURL * principalURL;
@property(readonly) NSURL * resourceID;

- (id)_copyAccountPropertiesPropFindElements;
- (void)_parseDAVHeader:(id)arg1;
- (void)_setPropertiesFromParsedResponses:(id)arg1;
- (void)_taskCompleted:(id)arg1 withError:(id)arg2;
- (id)collections;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)emailAddresses;
- (BOOL)fetchPrincipalSearchProperties;
- (id)homeSet;
- (BOOL)isExpandPropertyReportSupported;
- (id)newServerURL;
- (void)optionsTask:(id)arg1 error:(id)arg2;
- (id)principalSearchProperties;
- (id)principalURL;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (id)resourceID;
- (void)searchPropertySetTask:(id)arg1 completetWithPropertySearchSet:(id)arg2 error:(id)arg3;
- (void)setFetchPrincipalSearchProperties:(BOOL)arg1;
- (void)setNewServerURL:(id)arg1;
- (void)startTaskGroup;
- (void)taskGroupWillCancelWithError:(id)arg1;

@end