# BaiduMapDemo

今天做百度地图反地理编码 一直失败(反geo检索失败)，把失败原因记录下，希望对你有帮助。
#### ios百度地图反地理编码注意事项：
1.联网 - 这个必须别忘记了。
2.在申请百度地图key 的时候 写的 bundle ID  和 项目的bundle ID 必须一致。不一致会导致失败。
3.在授权成功后 才能进行 反地理编码，否则 也会失败。我就太着急了，在 viewdidload  ，还未授权成功的时候 就进行了 反地理编码。导致了失败。

Demo: ios 百度地图通过经纬度，进行 反地理编码(反geo检索)。得到 省，城市  及 信息地址。
Demo地址：https://github.com/lizhi0123/BaiduMapDemo
![反地理编码效果图.png](http://upload-images.jianshu.io/upload_images/2384741-12e3f7b41c68949c.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

![正向地理编码效果图.png](http://upload-images.jianshu.io/upload_images/2384741-1f6af20b651c92a9.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)



如果帮你解决了问题， 请留言。
