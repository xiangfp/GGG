/******************************************************************
 文件名称: Element.m
 系统名称: 移动平台
 模块名称: 客户端
 类 名 称: Element
 软件版权: 杭州长亮金融信息服务有限公司
 功能说明: element节点
 系统版本:
 开发人员: 
 开发时间: 11-4-16
 审核人员:
 相关文档:
 修改记录: 
 ******************************************************************/

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#import "XMLNode.h"
#define kScriptStart    @"<script"
#define kScriptEnd      @"</script"


@class Document, ElementContext, TextNode, CssRule;
@interface Element : NSObject<XMLNode>{
    NSString            *_tag;
    NSMutableDictionary *_attributes;
    
    Document            *_document;
    Element             *_parent;
    NSMutableArray      *_texts;
    NSMutableArray      *_elements;
    NSMutableArray      *_nodes;
    
    ElementContext      *_context;
}

#pragma mark function
- (id)initWithDocument:(Document *)document parent:(Element *)parent tag:(NSString *)tag attributes:(NSDictionary *)attributes;

#pragma mark dom
@property (nonatomic, readonly) NSString *tag;
@property (nonatomic, assign) ElementContext *context;
@property (nonatomic, readonly)  Document *document;
@property (nonatomic, readonly)  Element *parent;
@property (nonatomic, readonly)  NSArray *texts;
@property (nonatomic, readonly)  NSArray *elements;
@property (nonatomic, readonly)  NSArray *nodes;
@property (nonatomic, readonly)  NSDictionary *attributes;
@property (nonatomic, retain) NSMutableDictionary *eventDictinoary;
/**
 *  css属性
 */
@property (nonatomic, retain) NSMutableDictionary *rules;

/**
 *  css选择器
 */
@property (nonatomic, retain) NSMutableArray *selectors;

@property (nonatomic, assign) id jsElement;




- (NSDictionary*)getRules;
- (NSDictionary*)getPseudoRules:(NSString *)pseudo;
- (void)clearRules;
- (void)addRule:(NSDictionary *)rule forKey:(NSArray *)key;
- (NSString*)attributeForName:(NSString*)name;
- (void)setAttributeName:(NSString *)name value:(NSString*)value;
- (void)setAttributeWithoutViewChangedName:(NSString *)name value:(NSString *)value;
- (void)appendElement:(Element*)element atIndex:(NSInteger)index;
- (void)appendTextNode:(TextNode*)textNode atIndex:(NSInteger)index;
- (void)removeChild:(Element*)element;


#pragma mark element
- (NSArray*)elementsForTag:(NSString*)tag;
- (NSArray*)elementsForTags:(NSArray*)tags;
- (NSArray*)elementsForAttribute:(NSString*)attribute value:(NSString*)value;
- (NSArray*)elementsForClass:(NSString*)attribute value:(NSString*)value;
- (Element*)lastElementForTag:(NSString*)name;
- (Element*)parentElementForClass:(NSString *)attribute valueInDocument:(NSString*)value;
- (Element*)parentElementForTag:(NSString*)tag;
- (Element*)parentElementForID:(NSString*)ID;
- (NSArray*)findChildren:(Element *)element;
- (NSArray*)findChildren:(Element *)element withTag:(NSString*)tag;
- (NSArray*)findChildren:(Element *)element withClass:(NSString*)name;
- (NSArray*)findChildren:(Element *)element withID:(NSString*)ID;
- (Element*)firstElementForTag:(NSString*)name;

//获得第一孩子节点
- (Element *) firstChild;
//获得兄弟节点
- (Element *) nextsibling;
/**
 *  获取前一个兄弟节点
 *
 *  @return
 */
-(Element *)previousElement;

//树高
+ (int) treeHeight:(Element *)root;
//@property (nonatomic, retain) Element *caParent;

#pragma mark xml string
@property (nonatomic, retain, readonly) NSString *nodesXml;

-(void)copyElement:(Element *)element;

-(BOOL)isEqualToElement:(Element *)element;




@end
