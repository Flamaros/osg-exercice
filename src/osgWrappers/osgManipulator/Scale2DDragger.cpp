// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/Node>
#include <osg/Vec2>
#include <osg/Vec4>
#include <osgGA/GUIActionAdapter>
#include <osgGA/GUIEventAdapter>
#include <osgManipulator/Scale2DDragger>
#include <osgUtil/IntersectVisitor>
#include <osgUtil/SceneView>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osgManipulator::Scale2DDragger::ScaleMode)
	I_EnumLabel(osgManipulator::Scale2DDragger::SCALE_WITH_ORIGIN_AS_PIVOT);
	I_EnumLabel(osgManipulator::Scale2DDragger::SCALE_WITH_OPPOSITE_HANDLE_AS_PIVOT);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgManipulator::Scale2DDragger)
	I_BaseType(osgManipulator::Dragger);
	I_ConstructorWithDefaults1(IN, osgManipulator::Scale2DDragger::ScaleMode, scaleMode, osgManipulator::Scale2DDragger::SCALE_WITH_ORIGIN_AS_PIVOT,
	                           ____Scale2DDragger__ScaleMode,
	                           "",
	                           "");
	I_Method7(bool, handle, IN, int, pixel_x, IN, int, pixel_y, IN, const osgUtil::SceneView &, sv, IN, const osgUtil::IntersectVisitor::HitList &, hitList, IN, const osgUtil::IntersectVisitor::HitList::iterator &, hitIter, IN, const osgGA::GUIEventAdapter &, ea, IN, osgGA::GUIActionAdapter &, us,
	          __bool__handle__int__int__C5_osgUtil_SceneView_R1__C5_osgUtil_IntersectVisitor_HitList_R1__C5_osgUtil_IntersectVisitor_HitList_iterator_R1__C5_osgGA_GUIEventAdapter_R1__osgGA_GUIActionAdapter_R1,
	          "Handle pick events on dragger and generate TranslateInLine commands. ",
	          "");
	I_Method0(void, setupDefaultGeometry,
	          __void__setupDefaultGeometry,
	          "Setup default geometry for dragger. ",
	          "");
	I_Method1(void, setMinScale, IN, const osg::Vec2 &, min,
	          __void__setMinScale__C5_osg_Vec2_R1,
	          "Set/Get min scale for dragger. ",
	          "");
	I_Method0(const osg::Vec2 &, getMinScale,
	          __C5_osg_Vec2_R1__getMinScale,
	          "",
	          "");
	I_Method1(void, setColor, IN, const osg::Vec4 &, color,
	          __void__setColor__C5_osg_Vec4_R1,
	          "Set/Get color for dragger. ",
	          "");
	I_Method0(const osg::Vec4, getColor,
	          __C5_osg_Vec4__getColor,
	          "",
	          "");
	I_Method1(void, setPickColor, IN, const osg::Vec4 &, color,
	          __void__setPickColor__C5_osg_Vec4_R1,
	          "Set/Get pick color for dragger. ",
	          "Pick color is color of the dragger when picked. It gives a visual feedback to show that the dragger has been picked.");
	I_Method0(const osg::Vec4, getPickColor,
	          __C5_osg_Vec4__getPickColor,
	          "",
	          "");
	I_Method1(void, setTopLeftHandleNode, IN, osg::Node &, node,
	          __void__setTopLeftHandleNode__osg_Node_R1,
	          "Set/Get the handle nodes for dragger. ",
	          "");
	I_Method0(osg::Node *, getTopLeftHandleNode,
	          __osg_Node_P1__getTopLeftHandleNode,
	          "",
	          "");
	I_Method1(void, setBottomLeftHandleNode, IN, osg::Node &, node,
	          __void__setBottomLeftHandleNode__osg_Node_R1,
	          "",
	          "");
	I_Method0(osg::Node *, getBottomLeftHandleNode,
	          __osg_Node_P1__getBottomLeftHandleNode,
	          "",
	          "");
	I_Method1(void, setTopRightHandleNode, IN, osg::Node &, node,
	          __void__setTopRightHandleNode__osg_Node_R1,
	          "",
	          "");
	I_Method0(osg::Node *, getTopRightHandleNode,
	          __osg_Node_P1__getTopRightHandleNode,
	          "",
	          "");
	I_Method1(void, setBottomRightHandleNode, IN, osg::Node &, node,
	          __void__setBottomRightHandleNode__osg_Node_R1,
	          "",
	          "");
	I_Method0(osg::Node *, getBottomRightHandleNode,
	          __osg_Node_P1__getBottomRightHandleNode,
	          "",
	          "");
	I_Method1(void, setTopLeftHandlePosition, IN, const osg::Vec2 &, pos,
	          __void__setTopLeftHandlePosition__C5_osg_Vec2_R1,
	          "Set/Get the handle nodes postion for dragger. ",
	          "");
	I_Method0(const osg::Vec2 &, getTopLeftHandlePosition,
	          __C5_osg_Vec2_R1__getTopLeftHandlePosition,
	          "",
	          "");
	I_Method1(void, setBottomLeftHandlePosition, IN, const osg::Vec2 &, pos,
	          __void__setBottomLeftHandlePosition__C5_osg_Vec2_R1,
	          "",
	          "");
	I_Method0(const osg::Vec2 &, getBottomLeftHandlePosition,
	          __C5_osg_Vec2_R1__getBottomLeftHandlePosition,
	          "",
	          "");
	I_Method1(void, setTopRightHandlePosition, IN, const osg::Vec2 &, pos,
	          __void__setTopRightHandlePosition__C5_osg_Vec2_R1,
	          "",
	          "");
	I_Method0(const osg::Vec2 &, getTopRightHandlePosition,
	          __C5_osg_Vec2_R1__getTopRightHandlePosition,
	          "",
	          "");
	I_Method1(void, setBottomRightHandlePosition, IN, const osg::Vec2 &, pos,
	          __void__setBottomRightHandlePosition__C5_osg_Vec2_R1,
	          "",
	          "");
	I_Method0(const osg::Vec2 &, getBottomRightHandlePosition,
	          __C5_osg_Vec2_R1__getBottomRightHandlePosition,
	          "",
	          "");
	I_SimpleProperty(osg::Node &, BottomLeftHandleNode, 
	                 0, 
	                 __void__setBottomLeftHandleNode__osg_Node_R1);
	I_SimpleProperty(const osg::Vec2 &, BottomLeftHandlePosition, 
	                 __C5_osg_Vec2_R1__getBottomLeftHandlePosition, 
	                 __void__setBottomLeftHandlePosition__C5_osg_Vec2_R1);
	I_SimpleProperty(osg::Node &, BottomRightHandleNode, 
	                 0, 
	                 __void__setBottomRightHandleNode__osg_Node_R1);
	I_SimpleProperty(const osg::Vec2 &, BottomRightHandlePosition, 
	                 __C5_osg_Vec2_R1__getBottomRightHandlePosition, 
	                 __void__setBottomRightHandlePosition__C5_osg_Vec2_R1);
	I_SimpleProperty(const osg::Vec4 &, Color, 
	                 0, 
	                 __void__setColor__C5_osg_Vec4_R1);
	I_SimpleProperty(const osg::Vec2 &, MinScale, 
	                 __C5_osg_Vec2_R1__getMinScale, 
	                 __void__setMinScale__C5_osg_Vec2_R1);
	I_SimpleProperty(const osg::Vec4 &, PickColor, 
	                 0, 
	                 __void__setPickColor__C5_osg_Vec4_R1);
	I_SimpleProperty(osg::Node &, TopLeftHandleNode, 
	                 0, 
	                 __void__setTopLeftHandleNode__osg_Node_R1);
	I_SimpleProperty(const osg::Vec2 &, TopLeftHandlePosition, 
	                 __C5_osg_Vec2_R1__getTopLeftHandlePosition, 
	                 __void__setTopLeftHandlePosition__C5_osg_Vec2_R1);
	I_SimpleProperty(osg::Node &, TopRightHandleNode, 
	                 0, 
	                 __void__setTopRightHandleNode__osg_Node_R1);
	I_SimpleProperty(const osg::Vec2 &, TopRightHandlePosition, 
	                 __C5_osg_Vec2_R1__getTopRightHandlePosition, 
	                 __void__setTopRightHandlePosition__C5_osg_Vec2_R1);
END_REFLECTOR

