/*
1
384
 30887 92778 36916 47794 38336 85387 60493 16650 41422 2363 90028 68691 20060 97764 13927 80541 83427 89173 55737 5212 95369 2568 56430 65783 21531 22863 65124 74068 3136 13930 79803 34023 23059 33070 98168 61394 18457 75012 78043 76230 77374 84422 44920 13785 98538 75199 94325 98316 64371 66414 3527 76092 68981 59957 41874 6863 99171 6997 97282 2306 20926 77085 36328 60337 26506 50847 21730 61314 25858 16125 53896 19583 546 98815 33368 15435 90365 44044 13751 71088 26809 17277 47179 95789 93585 5404 2652 92755 12400 99933 95061 49677 93369 47740 10013 36227 98587 48095 97540 40796 80571 51435 60379 97468 66602 10098 12903 73318 70493 26653 60757 97302 60281 24287 9442 53866 29690 28445 46620 58441 44730 58032 8118 38098 5772 34482 90676 20710 98928 4568 77857 79498 72354 54587 76966 55307 64684 6220 28625 51529 32872 5733 48830 9504 30020 58271 63369 59709 86716 26341 18150 47797 724 42619 2246 22847 93452 92922 43556 92380 97489 37765 88229 69842 92351 65194 41501 57035 87765 70125 24915 36988 75857 73744 46492 22228 48366 9860 81937 51433 52552 16438 99229 53276 75408 1475 76122 68859 94396 36030 61238 8236 73794 65819 94429 66144 31012 35929 39530 18777 22405 64444 55764 14614 54539 18607 36841 2905 44819 35129 70689 97370 67918 69918 66997 43325 87744 59471 12184 98491 95500 89773 6726 85645 55591 17506 68140 2955 69787 7670 38083 8543 88465 10198 39508 59356 28805 76349 78612 73623 27829 49300 87344 95747 35569 54341 55423 23312 13811 67606 21802 25662 73731 44879 11306 29321 78737 79445 48627 48523 3466 86709 73417 8283 13259 12925 67638 42063 5625 62601 32037 33453 11900 19380 45551 47469 90072 974 87132 3882 84931 8934 45895 58661 70164 57200 87982 48900 52997 52960 13774 72814 39669 87191 81096 52927 16467 65085 11341 22091 27685 43377 55543 55937 79108 17446 19757 69180 18419 6888 89413 3349 32173 51660 62010 2337 25211 66343 67588 78207 19302 97714 67373 75322 1256 64820 44600 17722 29905 55940 39812 73941 15668 11706 46229 11128 29151 65985 96659 63921 89225 2423 67270 21397 54082 45631 40085 79293 11973 7673 73851 47626 5386 41223 39300 6641 6043 83899 40714 52299 56191 80525 42591 88210 8582 88820 99337 37733 71156 95995 18005 60380 14770 85274 81777 68851 47256 21861 48143 75580 45885 21994 23206 67622
*/
#include <iostream>
using namespace std;

int main() {
	int t,n,prev,curr,count,add;

	    prev=curr=count=add=0;
	    cin>>n;
	    for(int i=0;i<n;++i)
	    {
	        cin>>curr;
	        if((prev!=0)&&(prev>=curr))
	        {
	            count+=(add*(add-1))/2;
	            add=1;
	        }
	        else
	        {
	            add++;
	        }
	        prev=curr;
	    }
	    count+=(add*(add-1))/2;
	    cout<<count<<"\n";

}
