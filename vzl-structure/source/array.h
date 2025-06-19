#ifndef VZL_ARRAY_H
#define VZL_ARRAY_H

#include <stddef.h>

struct vzl_array {
        size_t length;
        void *data;
};

//
// CONSTRUCTOR & DESTRUCTOR
//

// Initialise array
extern struct vzl_array *const
vzl_array_create(size_t size);

// Allocate memory for its content
extern void
vzl_array_allocate(struct vzl_array *const array);

// Deallocate array
extern void
vzl_array_destroy(struct vzl_array *array);

//
// INFORMATION
//

// Return element size
extern size_t const
vzl_array_get_size(struct vzl_array *const array);

// Return array length
extern size_t const
vzl_array_get_length(struct vzl_array *const array);

//
// GETTER
//

extern void *const
vzl_array_get(struct vzl_array *const array, size_t const index);

//
// SETTER
//

extern void
vzl_array_set(struct vzl_array *const array, size_t const index,
              void *const element);

// Zeroing content
extern void
vzl_array_clean(struct vzl_array *const array, size_t const index);

//
// OPERATIONS
//

// Copy content from `source` to `destination`
extern void
vzl_array_copy(struct vzl_array *const destination,
               struct vzl_array *const source);

//extern void
//vzl_array_swap(struct vzl_array *const destination, 
//               struct vzl_array *const source);

#endif //VZL_ARRAY_H

#ifdef VZL_ARRAY_IMPLEMENTATION

#ifndef vzl_malloc
#include <stdlib.h>
#define vzl_malloc malloc
#endif

#ifndef vzl_calloc
#include <stdlib.h>
#define vzl_calloc calloc
#endif

#ifndef vzl_free
#include <stdlib.h>
#define vzl_free free
#endif

#ifndef vzl_assert
#include <assert.h>
#define vzl_assert assert
#endif

#ifdef VZL_ALPHA
#include <stdio.h>
#define vzl_log(MSG) printf("%s : %s : %s", __FILE__, __LINE__, MSG)
#else
#define vzl_log(MSG)
#endif

//
// CONSTRUCTOR & DESTRUCTOR
//

// Initialise array
extern struct vzl_array *const
vzl_array_create(size_t length) {
        struct vzl_array* const a = 
                (struct vzl_array *)vzl_malloc(sizeof(struct vzl_array));
        a.length = length;
        return a;
}

// Allocate memory for its content
extern void
vzl_array_allocate(struct vzl_array *const array, size_t const element_size) {
        vzl_assert(array != nullptr && "Array not initialised...");
        arrary->data = calloc((array->data[0]/array->length), element_size);
}

// Deallocate array
extern void
vzl_array_destroy(struct vzl_array *array) {
        vzl_assert(array->data != nullptr && "Array data not initialised...");
        vzl_assert(array != nullptr && "Array not initialised...");

        free(array->data);
        free(array);
}

//
// INFORMATION
//

// Return element size
extern size_t const
vzl_array_get_size(struct vzl_array *const array) {
        vzl_assert(array->data != nullptr && "Array data not initialised...");
        vzl_assert(array != nullptr && "Array not initialised...");
        return array->data[0]/array->length;
}

// Return array length
extern size_t const
vzl_array_get_length(struct vzl_array *const array) {
        vzl_assert(array->data != nullptr && "Array data not initialised...");
        vzl_assert(array != nullptr && "Array not initialised...");
        return array->length;
}

//
// GETTER
//

extern void *const
vzl_array_get(struct vzl_array *const array, size_t const index) {
        vzl_assert(array->data != nullptr && "Array data not initialised...");
        vzl_assert(array != nullptr && "Array not initialised...");
        vzl_assert(array->length > index && "Index out of range...");

        return vzl_array->data[index];
}

//
// SETTER
//

extern void
vzl_array_set(struct vzl_array *const array, size_t const index,
              void *const element) {
        vzl_assert(array->data != nullptr && "Array data not initialised...");
        vzl_assert(array != nullptr && "Array not initialised...");
        vzl_assert(array->length > index && "Index out of range...");

        array->data[index] = element;
}

// Zeroing content
extern void
vzl_array_clean(struct vzl_array *const array, size_t const index) {
        (void) array;
        (void) index;
}

//
// OPERATIONS
//

// Copy content from `source` to `destination`
extern void
vzl_array_copy(struct vzl_array *const destination,
               struct vzl_array *const source) {
        (void) destination;
        (void) source;
}
#endif //VZL_ARRAY_IMPLEMENTATION
