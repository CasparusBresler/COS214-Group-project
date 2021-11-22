#include "TestBed.h"
#include "gtest/gtest.h"
#include "satellite.h"
#include "Mediator.h"
#include "aggregate.h"
#include "falcon9_factory.h"
#include "falconHeavy_factory.h"
#include "FirstStageRocket.h"

TestBed::TestBed()
{
}

TestBed::~TestBed()
{
}

int TestBed::run()
{
    aggregate *agg = new aggregate();
    Mediator *med = new Mediator(agg);

    TEST(Satellite, Satellite_Creation)
    {
        satellite *sat = new satellite("Steve", med);
        EXPECT_TRUE(sat != nullptr);
    }

    TEST(Satellite, Satellite_Name_Get)
    {
        EXPECT_TRUE(sat->getName() == "Steve");
        delete sat;
    }

    TEST(Falcon9_factory, Falcon9_factory_creation)
    {
        falcon9_factory *f9f = new falcon9_factory();
        EXPECT_TRUE(f9f != nullptr);
    }

    TEST(First_Stage, First_Stage_creation)
    {
        FirstStageRocket *fsr = new FirstStageRocket();
        EXPECT_TRUE(fsr != nullptr);
    }

    TEST(Falcon9_factory, Falcon9_creation)
    {
        Falcon9 *fal9 = f9f->createFalcon(fsr);
        EXPECT_TRUE(fal9 != nullptr);
        delete fal9;
        delete f9f;
    }

    TEST(FalconHeavy_factory, FalconHeavy_factory_creation)
    {
        falconHeavy_factory *fHf = new falconHeavy_factory();
        EXPECT_TRUE(fHf != nullptr);
    }

    TEST(FalconHeavy_factory, FalconHeavy_creation)
    {
        Falcon9 *falH = fHf->createFalcon(fsr);
        EXPECT_TRUE(falH != nullptr);
        delete falH;
        delete fHf;
        delete med;
        delete agg;
    }

    return RUN_ALL_TESTS();
}
