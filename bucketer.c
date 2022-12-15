#include <stdio.h>
#include <assert.h>

struct CountsByUsage {
  int lowCount;
  int mediumCount;
  int highCount;
};

struct CountsByUsage countBatteriesByUsage(const int* cycles, int nBatteries) {
  struct CountsByUsage counts = {0, 0, 0};
  return counts;
}

void testBucketingByNumberOfCycles() {
  const int chargeCycleCounts[] = {100, 300, 500, 600, 900, 1000};
  const int numberOfBatteries = sizeof(chargeCycleCounts) / sizeof(chargeCycleCounts[0]);
  printf("Counting batteries by usage cycles...\n");
  struct CountsByUsage counts = countBatteriesByUsage(chargeCycleCounts, numberOfBatteries);
  assert(counts.lowCount == 2);
  assert(counts.mediumCount == 3);
  assert(counts.highCount == 1);
  printf("Done counting :)\n");
}

int main() {
  testBucketingByNumberOfCycles();
  int a[100], lowCount, mediumCount, highCount;
  for(int i=0;i<lowCount;i++)
  {
    printf("Count=%d",a[i]);
  }
  for(int i=0;i<mediumCount;i++)
  {
    printf("Count=%d",a[i]);
  }
  for(int i=0;i<highCount;i++)
  {
    printf("Count=%d",a[i]);
  }
  return 0;
}
