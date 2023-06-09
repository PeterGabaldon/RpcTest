# RpcTest

Undocumented BitLocker Service (BDESVC) Local RPC Interface performs a MailSlot open operation on non-domain joined machines. Apparently, when this is not ocurring on domain-joined machines. This service runs as SYSTEM.

![image](https://github.com/PeterGabaldon/RpcTest/assets/34518201/efab6a8f-0089-4936-aa45-3a9ffdb65b3a)

When calling method 5, _Proc5_, the service will try to open a MailSlot to a non-existent name. Finally, I didn't find a way to abuse it.

![image](https://github.com/PeterGabaldon/RpcTest/assets/34518201/ef39892c-af3f-4332-ab4d-bb5ff137eba5)

![image](https://github.com/PeterGabaldon/RpcTest/assets/34518201/08390d55-8a6c-4e0b-8d4b-cfbb23bf1c6f)
![image](https://github.com/PeterGabaldon/RpcTest/assets/34518201/fe0bf888-fb9d-49e0-b989-abcf4ae51b53)

