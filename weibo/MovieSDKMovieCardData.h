//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MovieSDKWeiboCardData.h"

@class NSString;

@interface MovieSDKMovieCardData : MovieSDKWeiboCardData
{
    _Bool _is_release;
    NSString *_poster_url;
    NSString *_actor_display_str;
    NSString *_ext_summary;
    NSString *_score;
    NSString *_grade;
    NSString *_action_type;
    NSString *_buy_url;
    NSString *_video_url;
    NSString *_pageScheme;
    NSString *_film_id;
    NSString *_poll_text;
    NSString *_release_date;
    NSString *_desc;
}

@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) _Bool is_release; // @synthesize is_release=_is_release;
@property(copy, nonatomic) NSString *release_date; // @synthesize release_date=_release_date;
@property(copy, nonatomic) NSString *poll_text; // @synthesize poll_text=_poll_text;
@property(copy, nonatomic) NSString *film_id; // @synthesize film_id=_film_id;
@property(copy, nonatomic) NSString *pageScheme; // @synthesize pageScheme=_pageScheme;
@property(copy, nonatomic) NSString *video_url; // @synthesize video_url=_video_url;
@property(copy, nonatomic) NSString *buy_url; // @synthesize buy_url=_buy_url;
@property(copy, nonatomic) NSString *action_type; // @synthesize action_type=_action_type;
@property(copy, nonatomic) NSString *grade; // @synthesize grade=_grade;
@property(copy, nonatomic) NSString *score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *ext_summary; // @synthesize ext_summary=_ext_summary;
@property(copy, nonatomic) NSString *actor_display_str; // @synthesize actor_display_str=_actor_display_str;
@property(copy, nonatomic) NSString *poster_url; // @synthesize poster_url=_poster_url;
- (void).cxx_destruct;
- (_Bool)parser:(id)arg1;

@end

