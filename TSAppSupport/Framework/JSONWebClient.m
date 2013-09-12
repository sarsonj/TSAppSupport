//
// Created by JS on 9/12/13.
// Copyright (c) 2013 TappyTaps. All rights reserved.
//


#import "JSONWebClient.h"
#import "AFJSONRequestOperation.h"


@implementation JSONWebClient {

}


- (id)initWithBaseURL:(NSURL *)url {
    self = [super initWithBaseURL:url];
    if (self) {
        [self setParameterEncoding:AFJSONParameterEncoding];
        [self setDefaultHeader:@"Accept" value:@"application/json"];
        [self registerHTTPOperationClass:[AFJSONRequestOperation class]];
        [AFJSONRequestOperation addAcceptableContentTypes:[NSSet setWithObjects:@"text/plain", nil]];
    }

    return self;
}



@end