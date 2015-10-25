
// Performing type definitions for various integral types that are to be used
// around the library

// Unsigned base types.
typedef unsigned char 		uint8;		// 8-bit  unsigned.
typedef unsigned short int	uint16;		// 16-bit unsigned.
typedef unsigned int		uint32;		// 32-bit unsigned.
typedef unsigned long long	uint64;		// 64-bit unsigned.

// Signed base types.
typedef	signed char			int8;		// 8-bit  signed.
typedef signed short int	int16;		// 16-bit signed.
typedef signed int	 		int32;		// 32-bit signed.
typedef signed long long	int64;		// 64-bit signed.

typedef float	float32;
typedef double	float64;

#define ARC_FORCEINLINE __forceinline
#define ARC_INLINE inline

// Assertion checking on the condition that is made
#define ARC_CHECK_AND_THROW(Condition,Message) \
	if (Condition) \
	{ \
		throw gcnew System::Exception(Message); \
	}

#define ARC_FBXSDK_CLASS_DECLARE(Class,Native,Parent)\
	public:\
		static FBXClassId^ ClassId;\
		static Class^ Create(FBXManager^ manager, String^ name);

#define ARC_FBXSDK_FRIEND_NEW() 1

#define ARC_FBXSDK_CLASS_IMPLEMENT(Class, Native, Parent) \
	Class^ Class::Create(FBXManager^ managerInstance, String^ name) \
	{\
	return gcnew Class##((##Native##*)##Native##::Create(managerInstance->GetFBXManager(),StringHelper::ToNative(name)));\
	}

#define ARC_FBXSDK_OBJECT_DEFINE(Class,Parent,Native) 1

// Second iteration of this macro
#define ARC_FBXSDK_OBJECT_IMPLEMENT(Class,Parent,Native)\
	static Class^ Create(FBXObject^ container, String^ name)\
	{\
		return gcnew Class##(Native##::Create(container->GetFBXObject(),StringHelper::ToNative(name)));\
	}

/* 
 * **********************************
 * ARCMANAGEDFBX SPECIFIC MACROS 
 * **********************************
 */
#define ARC_DEFAULT_INTERNAL_CONSTRUCTOR(Type,NativeType) \
	internal:\
		Type##(##NativeType##* instance);

#define ARC_DEFAULT_INTERNAL_CONSTRUCTOR_IMPL(Type, NativeType) \
	Type::##Type##(##NativeType##* instance) \
	{	\
		m_NativeInstance = instance;\
	}

#define ARC_DEFAULT_INTERNAL_CONSTRUCTOR_INHERIT_IMPL(Type, ParentType, NativeType) \
	Type::##Type##(##NativeType##* instance) : ParentType(instance) \
	{	\
		\
	}

#define ARC_DEFAULT_CONSTRUCTORS(Type) \
	Type##();\
	~##Type##();\
	!##Type##();

#define ARC_DEFAULT_CONSTRUCTORS_IMPL(ImplType) \
	ImplType::ImplType()\
	{\
	}\
	ImplType::~ImplType()\
	{\
	}\
	ImplType::!ImplType()\
	{\
	}

// This will most likely be used with the likes of FBXObject and having to cast down and up based on
// all the child classes in the SDK
#define ARC_CHILD_CAST(ParentMember, NativeType, ChildType) \
static const char* ClassName = #NativeType;\
NativeType##* ChildType::Get##ChildType()\
{\
	return static_cast<NativeType*>(this->m_##ParentMember);	\
}

#define ARC_UNCOPYABLE(type) \
	private: \
		type(const type& rhs); \
		type operator=(const type& rhs);


// Defines a read-only property.
#define ARC_PROPERTY_PUBLICGET(type, name)\
property type name\
{\
	type get();\
};

// Defines a read-only property.
#define ARC_STATIC_PROPERTY_PUBLICGET(type, name)\
static property type name\
{\
	type get();\
};

// Define the property macros that are to be used for boiler plate definitions
#define ARC_PROPERTY_PUBLICGET_PUBLICSET(type,name) \
property type name \
{ \
type get(); \
void set(type value); \
}

// The implementation macro for any of the member properties in the class
#define ARC_IMPL_GET(type,classname,name, ...)\
type classname##::##name##::get()\
{\
	return this->Get##classname##()->##name##__VA_ARGS__;\
}

#define ARC_IMPL_GET_STRING_PROP(ClassName,Name,PropertyName)\
String^ ClassName##::##PropertyName##::get()\
{\
	return gcnew String(StringHelper::ToManaged(this->Get##ClassName##()->##Name##.Get().Buffer()));\
}

#define ARC_IMPL_GET_STRING_MEMBER(ClassName,Name,PropertyName)\
String^ ClassName##::##PropertyName##::get()\
{\
	return gcnew String(StringHelper::ToManaged(this->Get##ClassName##()->##Name##.Buffer()));\
}

// The type being the return type of the method
#define ARC_IMPL_PROPERTY_GET(type,classname,name)\
type classname##::##name##::get()\
{\
	return m_##name##;\
}

#define ARC_IMPL_PROPERTY_SET(type,classname,name) \
void classname##::##name##::set(type value)\
{\
	this->m_##name = value;\
}
