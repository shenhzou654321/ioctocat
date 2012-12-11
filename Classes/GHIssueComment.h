#import <Foundation/Foundation.h>
#import "GHResource.h"
#import "GHComment.h"


@class GHUser;

@interface GHIssueComment : GHComment

@property(nonatomic,strong)id parent; // a GHIssue or GHPullRequest instance

- (id)initWithParent:(id)theParent andDictionary:(NSDictionary *)theDict;
- (id)initWithParent:(id)theParent;

@end