#pragma once

namespace ArcManagedFBX
{
	namespace Types
	{
		// The types that are to be used for the attributes
		enum class AttributeType
		{   
			eUnknown,
			eNull,
			eMarker,
			eSkeleton, 
			eMesh, 
			eNurbs, 
			ePatch,
			eCamera, 
			eCameraStereo,
			eCameraSwitcher,
			eLight,
			eOpticalReference,
			eOpticalMarker,
			eNurbsCurve,
			eTrimNurbsSurface,
			eBoundary,
			eNurbsSurface,
			eShape,
			eLODGroup,
			eSubDiv,
			eCachedEffect,
			eLine
		};

		enum class FilmRollOrder
		{
			eRotateFirst,	//!< The film back is first rotated then translated by the pivot point value.
			eTranslateFirst	//!< The film back is first translated then rotated by the film roll value.
		};

		public enum class Unit
		{
			Metres,
			Centimetres
		};

		public enum class AxisSystem
		{
			Max,
			MayaYUp,
			MayaZUp
		};

		// Wraps "DecayType"
		public enum class DecayType
		{
			eNone,
			eLinear,
			eQuadratic,
			eCubic
		};

		enum class ObjectFlag
		{
			eNone = 0,					 //!< No flags.
			eInitialized = 1 << 0,		 //!< Automatically set when FbxObject::Construct() is completed.
			eSystem = 1 << 1,			 //!< When set, object is deleted upon FbxManager destroy only. Use carefully!
			eSavable = 1 << 2,			 //!< If set, object is stored in FBX file upon export. All objects are savable by default.
			eSelected = 1 << 3,			 //!< Used by the selection mechanic to specify a selected object.
			eHidden = 1 << 4,			 //!< Used for interface representation; if set, the object should not be visible.
			eContentLoaded = 1 << 5,	 //!< Used by load-on-demand mechanic to specify if an object has its content loaded.
			eDontLocalize = 1 << 6,		 //!< Used by asset builder; Do not localize this object
			eCopyCalledByClone = 1 << 16 //!< Used internally. If set, modify the Copy behavior of the object
		};
		
		// Wraps "Type"
		public enum class LightType
		{
			ePoint, 
			eDirectional, 
			eSpot,
			eArea,
			eVolume
		};

		public enum class AreaLightShape
		{
			eRectangle,
			eSphere
		};

		enum class ApertureMode
		{
			eHorizAndVert,	//!< Set the angle values for both the horizontal and vertical settings. 
			eHorizontal,	//!< Set only the horizontal angle. 
			eVertical,		//!< Set only the vertical angle. 
			eFocalLength	//!< Use focal length directly. 
		};

		enum class AspectRatioMode
		{
			eWindowSize,		//!< Both width and height values aren't relevant.
			eFixedRatio,		//!< The height value is set to 1.0 and the width value is relative to the height value.
			eFixedResolution,	//!< Both width and height values are in pixels.
			eFixedWidth,		//!< The width value is in pixels and the height value is relative to the width value.
			eFixedHeight		//!< The height value is in pixels and the width value is relative to the height value.
		};

		enum class ApertureFormat
		{
			eCustomAperture,	//!< The film size, squeeze ratio and aspect ratio has been user-specified, and matches none of the other aperture formats.
			e16mmTheatrical,	//!< Film Size: 0.404, 0.295 inches. Film Squeeze Ratio: 1.0. Film Aspect Ratio: 1.369.
			eSuper16mm,			//!< Film Size: 0.493, 0.292 inches. Film Squeeze Ratio: 1.0. Film Aspect Ratio: 1.688.
			e35mmAcademy,		//!< Film Size: 0.864, 0.630 inches. Film Squeeze Ratio: 1.0. Film Aspect Ratio: 1.371. 
			e35mmTVProjection,	//!< Film Size: 0.816, 0.612 inches. Film Squeeze Ratio: 1.0. Film Aspect Ratio: 1.333.
			e35mmFullAperture,	//!< Film Size: 0.980, 0.735 inches. Film Squeeze Ratio: 1.0. Film Aspect Ratio: 1.333.
			e35mm185Projection,	//!< Film Size: 0.825, 0.446 inches. Film Squeeze Ratio: 1.0. Film Aspect Ratio: 1.850.
			e35mmAnamorphic,	//!< Film Size: 0.864, 0.732 inches. Film Squeeze Ratio: 2.0. Film Aspect Ratio:1.180. 
			e70mmProjection,	//!< Film Size: 2.066, 0.906 inches. Film Squeeze Ratio: 1.0. Film Aspect Ratio: 2.280.
			eVistaVision,		//!< Film Size: 1.485, 0.991 inches. Film Squeeze Ratio: 1.0. Film Aspect Ratio: 1.498.
			eDynaVision,		//!< Film Size: 2.080, 1.480 inches. Film Squeeze Ratio: 1.0. Film Aspect Ratio: 1.405.
			eIMAX				//!< Film Size: 2.772, 2.072 inches. Film Squeeze Ratio: 1.0. Film Aspect Ratio: 1.338.
		};

		public enum class Format
		{
			eCustomFormat,	//!< The format's width, height, or pixel ratio has been user-specified, and matches none of the other picture formats.
			eD1NTSC,		//!< Standard format for D1 NTSC (720 by 486).
			eNTSC,			//!< NTSC standard for North American television broadcast (640 by 480).
			ePAL,			//!< PAL standard for European television broadcast (570 by 486).
			eD1PAL,			//!< Standard format for D1 PAL (720 by 576).
			eHD,			//!< HD format(1920 by 1080).
			e640x480,		//!< Recommended computer screen format (640 by 480).
			e320x200,		//!< Recommended format for World Wide Web production(320 by 200).
			e320x240,		//!< Alternate World Wide Web format(320 by 240).
			e128x128,		//!< Format(128 by 128)
			eFullscreen		//!< Full computer screen format (1280 by 1024 pixels).
		};

		public enum class ProjectionType
		{
			ePerspective,
			eOrthogonal
		};
	}
}