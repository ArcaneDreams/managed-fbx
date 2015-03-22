
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

#define ARC_DEFAULT_INTERNAL_CONSTRUCTOR(Type,NativeType) \
	Type##(##NativeType##* instance);

#define ARC_DEFAULT_CONSTRUCTORS(Type) \
	Type##();\
	~##Type##();\
	!##Type##();

// This will most likely be used with the likes of FBXObject and having to cast down and up based on
// all the child classes in the SDK
#define ARC_CHILD_CAST(ParentMember, NativeType, ChildType) \
NativeType##* ChildType##::Get##ChildType##()\
{\
	if (this->m_##ParentMember == nullptr)\
		throw gcnew ArcManagedFBX::Exceptions::FBXException("The parent member native object is not valid!");\
		\
	return dynamic_cast<##NativeType##*>(this->m_##ParentMember##);	\
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


// Define the property macros that are to be used for boiler plate definitions
#define ARC_PROPERTY_PUBLICGET_PUBLICSET(type,name) \
property type name \
{ \
type get(); \
void set(type value); \
}

#define ARC_PROPERTY_PUBLICGET_PROTECTEDSET(type,name) \
property type name \
{ \
	type get(); \
protected: set (type value); \
}

#define ARC_PROPERTY_PUBLICGET_INTERNALSET(type,name) \
property type name \
{ \
	type get(); \
internal: set (type value); \
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
