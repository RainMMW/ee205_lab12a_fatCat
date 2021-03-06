///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-lab12a-fatCat - EE 205 - Spr 2022
///
/// @file Weight.h
/// @version 1.0
///
/// @author Baishen Wang <baishen@hawaii.edu>
/// @date   16_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

using namespace std;

class Weight {
public:
    ////////////////////////Constants///////////////////////////////
    enum UnitOfWeight { POUND, KILO, SLUG };

    static const float    UNKNOWN_WEIGHT;
    static const float    KILOS_IN_A_POUND;
    static const float    SLUGS_IN_A_POUND;

    static const string POUND_LABEL;
    static const string KILO_LABEL;
    static const string SLUG_LABEL;

    ////////////////////////Constructors//////////////////////////////
    Weight() noexcept;
    Weight(float newWeight);
    Weight(UnitOfWeight newUnitOfWeight) noexcept;
    Weight(float newWeight, UnitOfWeight newUnitOfWeight);
    Weight(float newWeight, float newMaxWeight);
    Weight(UnitOfWeight newUnitOfWeight, float newMaxWeight);
    Weight(float newWeight, UnitOfWeight newUnitOfWeight, float newMaxWeight);

    /////////////////////////////Getters//////////////////////////////
    bool  isWeightKnown() const noexcept;
    bool  hasMaxWeight() const noexcept;
    float getWeight() const noexcept;
    float getWeight( UnitOfWeight weightUnits ) const noexcept;
    float getMaxWeight() const noexcept;
    UnitOfWeight getWeightUnit() const noexcept;

    //////////////////////////Setters////////////////////////////////
    void setWeight( float newWeight );
    void setWeight( float newWeight, UnitOfWeight weightUnits );

    ///////////////////////Conversion Methods///////////////////////
    static float fromKilogramToPound( float kilogram ) noexcept;
    static float fromPoundToKilogram( float pound ) noexcept;
    static float fromSlugToPound( float slug ) noexcept;
    static float fromPoundToSlug( float pound ) noexcept;
    static float convertWeight( float fromWeight, UnitOfWeight fromUnit, UnitOfWeight toUnit ) noexcept;

    /////////////////////////Validation//////////////////////////////
    bool isWeightValid( float checkWeight ) const noexcept;
    bool validate() const noexcept;
    void print() const noexcept;

private:
    ////////////////////Member Variables////////////////////////////
    bool bIsKnown;
    bool bHasMax;
    enum UnitOfWeight unitOfWeight;
    float weight{};
    float maxWeight{};

    ///////////////////////////Setter//////////////////////////////
    void setMaxWeight( float newMaxWeight );

};
