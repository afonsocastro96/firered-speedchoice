#ifndef POKEFIRERED_NES_PIPELINE_FAIL_SCREEN_H
#define POKEFIRERED_NES_PIPELINE_FAIL_SCREEN_H

enum {
    TEST_EXPECT_8 = 0,
    TEST_EXPECT_16,
    TEST_EXPECT_32
};

bool8 NESPipelineTest(void);
bool8 TimingTest(void);

#endif //POKEFIRERED_NES_PIPELINE_FAIL_SCREEN_H
