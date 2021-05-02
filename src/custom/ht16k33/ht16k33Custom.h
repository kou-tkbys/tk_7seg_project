/**
 * ht16k33Custon.h
 *
 * Customize class wrapping ht16k33.
 */
#ifndef tk_custom_ht16k33_custom_h // include guard
#define tk_custom_ht16k33_custom_h

#include <Arduino.h>
#include <ht16k33.h>

/**
 * namespace
 */
namespace tk
{
namespace tk_7seg_project
{
namespace custom 
{


/**
 * Public class
 */
class Ht16k33Cutom
{
    public:
        Ht16k33Cutom();
        virtual ~Ht16k33Cutom(){};

    private:
        /**
         * Ht16k33
         */
        HT16K33 ht16k33DeregateMember_;

};


} // namespace custom
} // namespace tk_7seg_project
} // namespace tk
#endif // include guard