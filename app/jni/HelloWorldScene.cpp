#include "HelloWorldScene.h"
#include "SimpleAudioEngine.h"

USING_NS_CC;

Scene *HelloWorld::createScene()
{
    Scene *sceen = Scene::createWithPhysics();
    sceen->getPhysicsWorld()->setDebugDrawMask(PhysicsWorld::DEBUGDRAW_ALL);
    auto layer = HelloWorld::create();
    sceen->addChild(layer);
    return sceen;
}


bool HelloWorld::init()
{
    FileUtils::getInstance();
    if (!Layer::init()) {
        return false;
    }

    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();



    auto label = Label::createWithTTF("Hello World", "primer print.ttf", 24);

        this->addChild(label, 1);


//    EventListenerTouchOneByOne *listener = EventListenerTouchOneByOne::create();
//    listener->onTouchBegan = [](Touch *touch, Event *event){
////        CocosDenshion::SimpleAudioEngine::getInstance()->playEffect("gunfire.wav");
//        return true;
//    };
//    getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, this);



    return true;
}

