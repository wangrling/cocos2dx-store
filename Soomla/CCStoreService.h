//
// Created by Fedor Shubin on 6/19/14.
//


#ifndef __CCStoreService_H_
#define __CCStoreService_H_


#include "cocos2d.h"
#include "CCStoreAssets.h"

namespace soomla {

    class CCStoreService : public cocos2d::CCObject {
    public:
        /**
        This class is singleton, use this function to access it.
        */
        static CCStoreService *getInstance();

        /**
        Initializes StoreController on native side and allows using its
        functions.
        @param storeAssets An instance of your store's assets class.
        @param storeParams A CCDictionary containing parameters for
        CCSoomlaStore (These were previously found in CCSoomla).
        This dictionary can contain the following:
        "soomSec": CCString - The value of the primary encryption key.
        "customSecret": CCString - The value of the secondary encryption
        key.
        "androidPublicKey": CCString - Your Android public key.
        "SSV": CCBool - Whether or not to enable server side
        verification of purchases.
        */
        static void initShared(CCStoreAssets *gameAssets, cocos2d::CCDictionary *storeParams);

        CCStoreService();

        virtual bool init(CCStoreAssets *gameAssets, cocos2d::CCDictionary *storeParams);

        void checkParams(cocos2d::CCDictionary *storeParams);
    };
}

#endif //__CCStoreService_H_
