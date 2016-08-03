/**
 * \file
 * \brief Provides various different types, typedefs, and functions used throughout.
 */
#ifndef _ARBITRARY_COMMON_H
#define _ARBITRARY_COMMON_H

/**
 * Mimic the ``nanogui`` style namespacing to make sure doxygen is configured correctly.
 */
#if !defined(NAMESPACE_BEGIN)
    /// Convenience pragma to begin namespace scoping in a legible manner without requiring indentation.
    #define NAMESPACE_BEGIN(name) namespace name {
#endif
#if !defined(NAMESPACE_END)
    /// Convenience pragma to end namespace scoping in a legible manner without requiring indentation.
    #define NAMESPACE_END(name) }
#endif

/// An enum that is not in a namespace.
enum UnscopedEnum {
    NO,
    YES
};

/// A namespace outside of arbitrary.
namespace external {
    /// Maximum number of traversals.
    static constexpr unsigned int MAX_DEPTH = 12;
}

/// A serializable parameters struct that nobody would ever actually use like this.
struct super_params {
    /// Creates a `super_params` struct with `x`, `y`, and `z` initialized to ``0.0f``;
    super_params() : x(0.0f), y(0.0f), z(0.0f) {}

    /**
     * \brief The explicit `super_params` constructor.
     *
     * \param _x
     * The value to set this `super_params` `x` field to.
     *
     * \param _y
     * The value to set this `super_params` `y` field to.
     *
     * \param _z
     * The value to set this `super_params` `z` field to.
     */
    super_params(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}

    /// A union of sorts.
    union U {
        /// One way of looking at things.
        int first_view;
        /// Another way of looking at them.
        float second_view;
    };

    /// The x Cartesian coordinate.
    float x;
    /// The y Cartesian coordinate.
    float y;
    /// The z Cartesian coordinate.
    float z;
};

/// This is a variable common to all other files.
static float common_float_variable = 12.21f;

/// An extra useful typedef to make your readers happy.
typedef bool super_bool;

/// The most supreme unions of them all.
union SupremeUnion {
    std::int32_t n;     // occupies 4 bytes
    std::uint16_t s[2]; // occupies 4 bytes
    std::uint8_t c;     // occupies 1 byte
};

namespace arbitrary {
    /// This is a union in a namespace.
    union NamespacedUnion {
        std::int32_t n;     // occupies 4 bytes
        std::uint16_t s[2]; // occupies 4 bytes
        std::uint8_t c;     // occupies 1 byte
    };

    namespace nested {
        /// This is a union in a a _nested_ namespace.
        union NestedNamespacedUnion {
            std::int32_t n;     // occupies 4 bytes
            std::uint16_t s[2]; // occupies 4 bytes
            std::uint8_t c;     // occupies 1 byte
        };
    }

    /// At a first glance, it doesn't seem arbitrary.
    bool arbitraryFunction() {
        return false;
    }

    /// Hem meh he mehemmeh.
    struct arbitrary_struct {
        /// Mehem
        int meh = 11;
        /// Mehehem
        arbitrary_struct(int m) : meh(m) {}
    };
}

/**
 * \brief A common function that would be used with ..doxygenfunction::.
 *
 * Does absolutely nothing.
 *
 * \param anything
 * Does whatever you want it to.
 */
static void someCommonFunction(super_bool anything) {
    if(anything)
        return;
}



#endif // _ARBITRARY_COMMON_H