/**
* (c) 2009-2017 Highsoft AS
*
* License: www.highcharts.com/license
* For commercial usage, a valid license is required. To purchase a license for Highcharts iOS, please see our website: https://shop.highsoft.com/
* In case of questions, please contact sales@highsoft.com
*/

#import "HIChartsJSONSerializable.h"


/**
* description: CSS styles for each legend item in hover mode. Only a subset of
CSS is supported, notably those options related to text. Properties
are inherited from style unless overridden here.

* demo: https://jsfiddle.net/gh/library/pure/highcharts/highcharts/tree/master/samples/highcharts/legend/itemhoverstyle/ : Red on hover
https://jsfiddle.net/gh/library/pure/highcharts/highcharts/tree/master/samples/maps/legend/itemstyle/ : Item text styles
* default: { "color": "#000000" }
*/
@interface HIItemHoverStyle: HIChartsJSONSerializable

@property(nonatomic, readwrite) NSString *color;

-(NSDictionary *)getParams;

@end
