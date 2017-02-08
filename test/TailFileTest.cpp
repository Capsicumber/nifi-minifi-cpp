/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../libminifi/include/TailFile.h"

// Sanity test, does not use gmock
TEST(Dummy, foobar) {
    EXPECT_EQ(1, 1);
}

namespace {

    // The fixture for testing class TailFileTest.
    class TailFileTest : public ::testing::Test {
    protected:
        // You can remove any or all of the following functions if its body
        // is empty.

        TailFileTest() {
            // You can do set-up work for each test here.

            uuid_t uuid;
            uuid_generate(uuid);  // Generate a random UUID
            processor = new TailFile(TailFile::ProcessorName, uuid);
        }

        virtual ~TailFileTest() {
            // You can do clean-up work that doesn't throw exceptions here.
        }

        // If the constructor and destructor are not enough for setting up
        // and cleaning up each test, you can define the following methods:

        virtual void SetUp() {
            // Code here will be called immediately after the constructor (right
            // before each test).

            // Setup
        }

        virtual void TearDown() {
            // Code here will be called immediately after each test (right
            // before the destructor).

            // Cleanup
        }

        // Objects declared here can be used by all tests in the test case for TailFileTest.

        Processor *processor = NULL;
    };

    // Tests that TailFileTest does Xyz.
    TEST_F(TailFileTest, testConsumeAfterTruncationStartAtBeginningOfFile) {
        // Exercises the Xyz feature of TailFileTest.
        ASSERT_TRUE(false); // TODO
    }

}  // namespace

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
