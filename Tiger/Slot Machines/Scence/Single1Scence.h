//
//  Single1Scence.h
//  Slot Machines
//
//  Created by Dingsheng Yu on 1/1/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "GameConfig.h"
#import "SceneManager.h"
#import "JoySticker.h"
#import "ItemLayer.h"
#import "InsertCoin.h"
#import "PourLayer.h"
#import "TigerLayer.h"
#import "ScoreLayer.h"
#import "Character.h"
#import "CoinLayer.h"
#import "UpLevelLayer.h"
#import "RateLayer.h"
#import "Plate.h"
#import "HelpLayer.h"
#import "ButtonLayer.h"

@interface Single1Scence : CCLayer{
    Plate * _plate;
    PourLayer  * _pourLayer;
    JoySticker * _joySticker;
    Character  * _character;
    ItemLayer  * _itemLayer;
    TigerLayer * _tigerLayer;
    ScoreLayer * _scoreLayer;
    CoinLayer  * _coinLayer;
    RateLayer  * _rateLayer;
    HelpLayer  * _helpLayer;
    ButtonLayer * _buttonLayer;
    UpLevelLayer * _upLevelLayer;
    CCMenuItemToggle * autoItemCopy;
    bool isAuto;
    bool isHelp;
}
-(void)LoadImage;
-(void)LoadMenu;
-(void)LoadAnimation;
-(void)FruitBeginScroll;
-(void)FruitStopScroll;
-(void)ScrollFinish;
-(void)PlateFinish:(int)score;
-(void)SwitchAuto;
-(void)SetHelpless;
@end
