# HttpServer

g++ http_conn.cpp server.cpp -o server

./server ip port

测试视频获取需要在root下添加一个mp4文件，并将welcomm.html和video.html的视频文件名修改为上传视频文件名

apachebench测试

目前并发数在1，2，3均可正常运行，高于四有问题，总会在最后一个或三个响应打转
