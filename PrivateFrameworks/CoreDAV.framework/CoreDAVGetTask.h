/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class <CoreDAVTaskDelegate>;

@interface CoreDAVGetTask : CoreDAVTask {
    id _appSpecificDataItemResult;
}

@property(retain) id appSpecificDataItemResult;
@property <CoreDAVTaskDelegate> * delegate;

- (id)appSpecificDataItemResult;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)requestBody;
- (void)setAppSpecificDataItemResult:(id)arg1;

@end