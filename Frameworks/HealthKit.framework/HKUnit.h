/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKUnit : NSObject <NSCopying, NSSecureCoding> {
    _HKFactorization * _baseUnitReduction;
    _HKFactorization * _dimensionReduction;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dimensionReductionLock;
    double  _reducedProportionalSize;
    double  _scaleOffset;
}

@property (nonatomic, readonly) _HKFactorization *_baseUnits;
@property (nonatomic, readonly) _HKDimension *dimension;
@property (nonatomic, readonly) double scaleOffset;
@property (readonly) NSString *unitString;

+ (id)_distanceUnitForLocale:(id)arg1;
+ (id)_foodEnergyUnitForLocale:(id)arg1;
+ (id)_heightUnitForLocale:(id)arg1;
+ (bool)_isValidUnitString:(id)arg1;
+ (id)_moles;
+ (id)_nullUnit;
+ (id)_personMassUnitForLocale:(id)arg1;
+ (id)_prefixStringForMetricPrefix:(long long)arg1;
+ (id)_temperatureUnitForLocale:(id)arg1;
+ (id)atmosphereUnit;
+ (id)calorieUnit;
+ (id)centimeterOfWaterUnit;
+ (id)countUnit;
+ (id)cupImperialUnit;
+ (id)cupUSUnit;
+ (id)dayUnit;
+ (id)degreeCelsiusUnit;
+ (id)degreeFahrenheitUnit;
+ (long long)energyFormatterUnitFromUnit:(id)arg1;
+ (id)fluidOunceImperialUnit;
+ (id)fluidOunceUSUnit;
+ (id)footUnit;
+ (id)gramUnit;
+ (id)gramUnitWithMetricPrefix:(long long)arg1;
+ (id)hourUnit;
+ (id)inchUnit;
+ (id)jouleUnit;
+ (id)jouleUnitWithMetricPrefix:(long long)arg1;
+ (id)kelvinUnit;
+ (id)kilocalorieUnit;
+ (id)kilojoulesUnit;
+ (long long)lengthFormatterUnitFromUnit:(id)arg1;
+ (id)literUnit;
+ (id)literUnitWithMetricPrefix:(long long)arg1;
+ (long long)massFormatterUnitFromUnit:(id)arg1;
+ (id)meterUnit;
+ (id)meterUnitWithMetricPrefix:(long long)arg1;
+ (id)mileUnit;
+ (id)millimeterOfMercuryUnit;
+ (id)milliseconds;
+ (id)minuteUnit;
+ (id)moleUnitWithMetricPrefix:(long long)arg1 molarMass:(double)arg2;
+ (id)moleUnitWithMolarMass:(double)arg1;
+ (id)ounceUnit;
+ (id)pascalUnit;
+ (id)pascalUnitWithMetricPrefix:(long long)arg1;
+ (id)percentUnit;
+ (id)pintImperialUnit;
+ (id)pintUSUnit;
+ (id)poundUnit;
+ (id)secondUnit;
+ (id)secondUnitWithMetricPrefix:(long long)arg1;
+ (id)siemenUnit;
+ (id)siemenUnitWithMetricPrefix:(long long)arg1;
+ (id)stoneUnit;
+ (bool)supportsSecureCoding;
+ (id)unitFromEnergyFormatterUnit:(long long)arg1;
+ (id)unitFromLengthFormatterUnit:(long long)arg1;
+ (id)unitFromMassFormatterUnit:(long long)arg1;
+ (id)unitFromString:(id)arg1;
+ (id)yardUnit;

- (void).cxx_destruct;
- (id)_baseUnitReduction;
- (id)_baseUnitReductionAndProportionalSize:(out double*)arg1 withCycleSet:(id)arg2;
- (id)_baseUnits;
- (id)_computeBaseUnitReductionAndProportionalSize:(out double*)arg1 withCycleSet:(id)arg2;
- (id)_dimensionReduction;
- (id)_foundationUnit;
- (id)_init;
- (bool)_isCompatibleWithDimension:(id)arg1;
- (bool)_isCompatibleWithUnit:(id)arg1;
- (bool)_isMetricDistance;
- (void)_reduceIfNecessaryWithCycleSet:(id)arg1;
- (double)_reducedProportionalSize;
- (double)_valueByConvertingValue:(double)arg1 toUnit:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dimension;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isNull;
- (id)reciprocalUnit;
- (double)scaleOffset;
- (id)unitDividedByUnit:(id)arg1;
- (id)unitMultipliedByUnit:(id)arg1;
- (id)unitRaisedToPower:(long long)arg1;
- (id)unitString;

@end
