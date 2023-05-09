#include <iostream>
#include <opencv2/opencv.hpp>

#ifdef _DEBUG
#pragma comment(lib,"opencv_world470d.lib")
#else	//RELEASE
#pragma comment(lib,"opencv_world470.lib")
#endif

using namespace cv;
using namespace std;

int sum(const unsigned char* const pData, int width, int height,
    int start_row, int start_col, int finish_row, int finish_col) {
    int sum = 0;
    //�ڵ� �ۼ�
    for (size_t row = start_row; row <= finish_row; row++)
    {
        for (size_t col = start_col; col <= finish_col; col++)
        {
            size_t index = (row)*width + (col);
            sum += pData[index];
        }
    }
    return sum;
}
int main()
{
    cout << "Hello OpenCV World!\n";
    string fileName = "jetson.bmp";
    Mat src = cv::imread(fileName, IMREAD_COLOR);
    if (src.empty())
    {
        return -1;
    }
    Mat gray = Mat(src.rows, src.cols, CV_8UC1);
    gray = 255;
    //convert color :: rgb to gray
    for (size_t row = 0; row < src.rows; row++)
    {
        for (size_t col = 0; col < src.cols; col++)
        {
            int index = row * src.cols + col;
            index *= 3;
            int b = src.data[index+0];//uchar * pData = img.data;
            int g = src.data[index+1];
            int r = src.data[index+2];
            //1. ����
            float y = 0.299 * r + 0.587 * g + 0.114 * b;

            //2. ���ο� Gray�̹��� ���ۿ� ����
            //gray.data[row * src.cols + col] = y;�Ͻ�������ȯ
            //gray.data[row * src.cols + col] = (uchar)y;���������ȯ-c
            gray.data[row * src.cols + col] = static_cast<uchar>(y);
        }

    }

    //sum of gray buffer 
    cout << "image data sum = "
        << sum(gray.data, gray.cols, gray.rows, 1, 1, 3, 3) << endl;

    //namedWindow("abc",WindowFlags::WINDOW_AUTOSIZE)
    return 0;
}
